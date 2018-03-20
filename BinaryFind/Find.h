#pragma once
class Find
{
public:
	Find();
	virtual ~Find();
	/**
	 * get the position of the element of a sort array
	 */
	virtual int find(int *arr, int len, int key) = 0;
protected:
	int times;
};

