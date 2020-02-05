#include"srtFunction.h"
//bubble sort
std::vector<int> bsort(std::vector<int>& a)
{
	std::vector<int>tmp;
	bool swap = true;
	while (swap)
	{
		swap = false;
		for (int i = 0; i < a.size() - 1; i++)
		{
			if (a[i] > a[i + 1])
			{
				a[i] += a[i + 1];
				a[i + 1] = a[i] - a[i + 1];
				a[i] -= a[i + 1];
				swap = true;
			}
		}
	}
	tmp = a;
	return tmp;
}
//selection sort
std::vector<int> SelectionSort(std::vector<int>& v)
{
	int temp, min;

	for (int i = 0; i < v.size()-1; i++) {
		min = i;
		for (int j = i+1; j < v.size(); j++) {
			if (v[j] < v[min])
				min = j;
		}
		temp = v[i];
		v[i] = v[min];
		v[min] = temp;
	}
	return v;
}