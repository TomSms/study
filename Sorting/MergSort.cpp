#include "stdafx.h"
#include "MergSort.h"
#if DEBUG
#include <iostream>
#endif
MergSort::MergSort(bool flag = true):CCSort(flag)
{
}


MergSort::~MergSort()
{
}

void MergSort::sort(int *arr, int len) {
	int *helparr = new int[len];
	mergeSort(arr,helparr, 0, len - 1);
	delete[] helparr;
}

void MergSort::sortInternal(int *arr, int len) {

}
#if DEBUG
static void print(int *a, int start, int end) {
	std::cout << "start:" << start << " end:" << end << std::endl;
	for (int i = start; i <= end; i++) {
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}
#endif
void MergSort::mergeSort(int *arr, int * helparr, int start, int end) {
	if (start < end) {
		int medium = (start + end) / 2;
		mergeSort(arr, helparr, start, medium);
#if DEBUG
		print(arr, start, medium);
#endif
		mergeSort(arr, helparr, medium + 1, end);
#if DEBUG
		print(arr,  medium + 1, end);
#endif
		//merge
		int m = start, k = medium+1;
		int i = start;
#if DEBUG
		std::cout << "current m:" << m << " K:" << k << std::endl;
#endif
		for (i = start;  m <= medium  && k <= end; i++) {
			if (arr[m] > arr[k] == order) {
				helparr[i] = arr[k++];
			}
			else {
				helparr[i] = arr[m++];
			}
		}
#if DEBUG
		std::cout << "current m:" << m << " K:" << k << std::endl;
#endif
		if (m == medium + 1) {
			for (; k <=end; k++) {
				helparr[i++] = arr[k];
			}
		}
		else {
			for (; m < medium + 1; m++) {
				helparr[i++] = arr[m];
			}
		}
		//last way copy the sort array from help array to origin array
#if DEBUG
		std::cout << "current m:" << m << " K:" << k << std::endl;
#endif
		for (i = start; i <= end; i++) {
			arr[i] = helparr[i];
		}
#if DEBUG
		print(arr, start, end);
#endif
	}
}
