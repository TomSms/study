// BinaryFind.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CCBinaryFind.h"
#include "Find.h"
#include <iostream>
#include <stdlib.h>
int main()
{
	int *arr = new int[100];
	Find *find = new CCBinaryFind();


	for (int i = 0; i < 100; i++) {
		arr[i] = i;
	}
	int pos = find->find(arr, 100, 28);
	std::cout << "position:" << pos << std::endl;
	delete[]arr;
	system("pause");
    return 0;
}

