// Sorting.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CCSort.h"
#include "MergSort.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	CCSort *sort = new MergSort(true);
	int arr[] = {1,2,3,9,8,7,5,6,4,0};
	sort->sort(arr, 10);

	for (int i = 0; i < 10; i++) {
		std::cout << "order " << i << " value:" << arr[i] << std::endl;
	}
	system("pause");
    return 0;
}

