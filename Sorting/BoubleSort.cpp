#include "stdafx.h"
#include "BoubleSort.h"


BoubleSort::BoubleSort(bool flag= true):CCSort(flag)
{
}


BoubleSort::~BoubleSort()
{
}

void BoubleSort::sort(int * arr, int len)
{
	boubleSort(arr, len);
}

void BoubleSort::boubleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] < arr[j + 1] == order) {
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
}
