#pragma once
#include "Find.h"
class CCBinaryFind :
	public Find
{
public:
	CCBinaryFind();
	virtual ~CCBinaryFind();
	virtual int find(int *arr, int len, int key);
};

