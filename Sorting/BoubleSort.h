#pragma once
#include "CCSort.h"
class BoubleSort :
	public CCSort
{
public:
	BoubleSort(bool flag);
	virtual ~BoubleSort();
	virtual void sort(int *arr, int len);
	virtual void boubleSort(int *arr, int len);
};

