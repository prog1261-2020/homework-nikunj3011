#pragma once

#include<vector>

std::vector<int> qSort(std::vector<int>& v);
void qsortWork(int l, int h, std::vector<int>& v);
int partition(int l, int h, std::vector<int>& v);
