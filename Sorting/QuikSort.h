#pragma once
#include "CCSort.h"
class QuikSort :
	public CCSort
{
public:
	QuikSort(bool flag);
	virtual ~QuikSort();
	virtual void sort(int *arr, int len);
protected:
	int partition(int *arr, int start, int end);//get the pivot position of a segment of the array begin start to end;
	void quickSort(int *arr, int start, int end);
};

