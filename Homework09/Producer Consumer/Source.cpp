/**
* @file <Source.cpp>
*
* @author  <Nikunj Rathod>
* @version <1.0>
*
* change log
* name      date
*
*
* (file, auther, version, and change log are depricated with modern source code management system)
*
* @section Academic Integrity
*  I certify that this work is solely my own and complies with
*  NBCC Academic Integrity Policy (policy 1111)
*
*
* @section DESCRIPTION
*  < Date in format >
*
*
* @section LICENSE
*  <Public>
*
*  Copyright 2020
*  Permission to use, copy, modify, and/or distribute this software for
*  any purpose with or without fee is hereby granted, provided that the
*  above copyright notice and this permission notice appear in all copies.
*
*  THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
*  WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
*  MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
*  ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
*  WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
*  ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
*  OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*
*/

#include <iostream>
#include <thread>
#include "WorkQueue.h"
#include <ctime>
#include <cstdlib>
#include <vector>
#include <mutex>
#include <atomic>
#include <chrono>

std::atomic<bool> make_work(false);
std::atomic<bool> finished(false);
WorkQueue jobs;
std::mutex cout_mutex;

void producer() {
	while (!make_work) {
		std::this_thread::yield();
	}
	while (make_work) {
		jobs.push(rand() % 100);
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}

}

void consumer(int id) {
	while (!make_work) {
		std::this_thread::yield();
	}
	while (make_work) {
		int n = jobs.pop();
		int sz = jobs.size();

		std::lock_guard<std::mutex> guard(cout_mutex);
		std::cout << "Size: " << sz << " : " << id << " processed " << n << "\n";
	}
	int sz = jobs.size();
	while (sz > 0) {
		if (jobs.size() == 0) {
			return;
		}
		int n = jobs.pop();
		std::lock_guard<std::mutex> guard(cout_mutex);
		std::cout << "Size: " << sz << " : " << id << " processed " << n << "\n";
	}
	return;
}

int main() {
	srand(time(0));
	std::vector<std::thread> producers;
	std::vector<std::thread> consumers;

	for (int i = 0; i < 5; ++i) {
		producers.push_back(std::thread(producer));
	}

	for (int i = 0; i < 2; ++i) {
		consumers.push_back(std::thread(consumer, i));
	}

	std::cout << "GO!\n";
	make_work = true;

	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
	make_work = false;

	for (auto& t : producers) {
		t.join();
	}
	for (auto& t : consumers) {
		t.join();
	}

	std::lock_guard<std::mutex> guard(cout_mutex);
	std::cout << "\n\nFINISH\n" << "Size: " << jobs.size() << "\n\n";

}