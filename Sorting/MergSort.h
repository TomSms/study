#pragma once
#include "CCSort.h"
class MergSort :
	public CCSort
{
public:
	MergSort(bool flag);
	virtual ~MergSort();
	
	void sort(int *arr, int len);
	void sortInternal(int *arr, int len);
	void mergeSort(int *arr, int * helparr, int start, int end);
};

