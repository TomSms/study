#include "stdafx.h"
#include "FullPermutationDivideConquerMethod.h"
#include "Tools.h"
#include<iostream>


FullPermutationDivideConquerMethod::FullPermutationDivideConquerMethod()
{
}


FullPermutationDivideConquerMethod::~FullPermutationDivideConquerMethod()
{
}

void FullPermutationDivideConquerMethod::permutation(char *t, int start, int len) {
#if DEBUG
	std::cout << "start:" << start << std::endl;
#endif 
	if (start == len -1) {
		std::cout << t << std::endl;
		times++;
		return;
	}
	if (len < 0) {
		std::cerr << "the len is illegal" << std::endl;
		return;
	}
	for (int i = start; i < len; i++) {
		Tools::swap(t, i, start, len);
#if DEBUG
		std::cout << "before tmp output " << t << " current start" << start << std::endl;
#endif
		permutation(t, start+1, len);
#if DEBUG
		std::cout << "after tmp output "  << t << " current start" << start << std::endl;
#endif
		Tools::swap(t, i, start, len);
	}
}

void FullPermutationDivideConquerMethod::full_permutation(char *t, int len) {
	times = 0; //clear times
	return permutation(t, 0, len);
}