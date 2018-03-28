#include "stdafx.h"
#include "QuikSort.h"
#include <ctime>
#include <cstdlib>
#include <iostream>
#define  DEBUG 1
QuikSort::QuikSort(bool flag = true):CCSort(flag)
{

}


QuikSort::~QuikSort()
{
}

void QuikSort::sort(int * arr, int len)
{
	quickSort(arr, 0, len - 1);
}

int QuikSort::partition(int * arr, int start, int end)
{
	int pivot = arr[start];
	int i = start;
	int j = end;
	while (i < j) {
		/**
		*  find a element less than the pivot from end to start one by one
		*/
		while (arr[j] > pivot && i< j) j--;
		arr[i] = arr[j];

		/**
		 * find a element big than the pivot from start to end one by one 
		 */
		while (arr[i] < pivot && i< j) i++;
		arr[j] = arr[i];
	}
	arr[i] = pivot;
	return i;
}

void QuikSort::quickSort(int * arr, int start, int end)
{
	if (start >= end) return;
	int pivot = partition(arr, start, end); 
#if DEBUG
	std::cout << "pivot:" << pivot << std::endl;
#endif
	quickSort(arr, start, pivot - 1);
	quickSort(arr, pivot + 1, end);
}
