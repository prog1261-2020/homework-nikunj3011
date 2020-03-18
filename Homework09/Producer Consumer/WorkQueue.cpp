#include "WorkQueue.h"

WorkQueue::WorkQueue()
{

}

void WorkQueue::push(int n)
{
	std::lock_guard<std::mutex> guard(mtx);
	jobs.push_back(n);
}

int WorkQueue::pop()
{
	//std::lock_guard<std::mutex> guard(mtx);
	while(true){

		//critical section
		mtx.lock();
		if (jobs.size() == 0) {
			mtx.unlock();
			//end critical section

			std::this_thread::yield();
		}
		else {//(jobs.size() > 0) {
			int r = jobs.front();
			jobs.pop_front();
			mtx.unlock();
			//end critical section
			return r;
		}
	}
	return 0;
}

int WorkQueue::size()
{
	std::lock_guard<std::mutex> guard(mtx);
	return jobs.size();
}
