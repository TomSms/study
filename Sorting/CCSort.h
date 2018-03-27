#pragma once
class CCSort
{
public:
	CCSort(bool flag);
	virtual ~CCSort();
	virtual void sort(int *arr, int len) = 0;
	void setAscendingOrder(bool flag);
protected:
	bool order;/** order ascending order  if true*/
};

