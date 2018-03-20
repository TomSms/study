#include "stdafx.h"
#include "CCBinaryFind.h"
#include <iostream>

CCBinaryFind::CCBinaryFind()
{
}


CCBinaryFind::~CCBinaryFind()
{
}

int CCBinaryFind::find(int *arr, int len, int key) {
	int start = 0, end = len - 1;
	int medium = 0;
	times = 0;
	if (len < 0 || arr == NULL)
	{
		std::cerr << "illegal argument of function find of class CCBinaryFind" << std::endl;
	}
	while (start < end) {
		medium = (start + end) / 2;
		if (arr[medium]  == key) {
			times++;
			return medium;
		}
		else if(arr[medium] < key){
			start = medium + 1;
		}
		else {
			end = medium - 1;
		}
		times++;
	}
	return -1;
}