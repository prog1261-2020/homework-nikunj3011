#include "srtFunction.h"
std::vector<int> qSort(std::vector<int>& v)
{
	qsortWork(0, v.size() - 1, v);
	return v;
}

void qsortWork(int l, int h, std::vector<int>& v)
{
	if (h <= l)
	{
		return;
	}
	int p = partition(l, h, v);
	qsortWork(l, p - 1, v);
	qsortWork(p + 1, h, v);
	return;
}
int partition(int l, int h, std::vector<int>& v)
{
	int p = v[h];
	int i = l - 1;

	for (int j = l; j <= h; j++) {
		if (v[j] < p) {
			++i;
			std::swap(v[i], v[j]);
		}
	}
	std::swap(v[i + 1], v[h]);
	return i + 1;
}