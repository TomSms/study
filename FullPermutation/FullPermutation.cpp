// FullPermutation.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "FullPermutationInterface.h"
#include "FullPermutationDivideConquerMethod.h"
#include <stdlib.h>
int main()
{
	char str[] = { '1','2','3','4','\0' };
	FullPermutationInterface * fpInterface = new FullPermutationDivideConquerMethod();
	fpInterface->full_permutation(str, 4);
	system("pause");
    return 0;
}

