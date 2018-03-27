#include "stdafx.h"
#include "CCSort.h"


CCSort::CCSort(bool flag):order(flag)
{
}


CCSort::~CCSort()
{
}

void CCSort::setAscendingOrder(bool flag)
{
	order = flag;
}
