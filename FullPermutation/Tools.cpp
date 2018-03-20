#include "stdafx.h"
#include "Tools.h"
#include <iostream>

Tools::Tools()
{
}


Tools::~Tools()
{
}

void Tools::swap(char *arr, int i, int j, int len) {
	if (i < 0 || j < 0 || len < 0 || i >len || j > len) {
		//output error
		std::cerr << "the argument of swap funcation is error" << std::endl;
	}
	char c = arr[i];
	arr[i] = arr[j];
	arr[j] = c;
}