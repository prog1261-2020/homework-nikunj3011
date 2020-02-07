#pragma once

#include<vector>

std::vector<int> qSort(std::vector<int>& v);
void qsortWork(int low, int high, std::vector<int>& v);
int partition(int low, int high, std::vector<int>& v);
