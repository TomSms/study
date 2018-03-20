#pragma once
#include "FullPermutationInterface.h"
class FullPermutationDivideConquerMethod :
	public FullPermutationInterface
{
public:
	FullPermutationDivideConquerMethod();
	virtual ~FullPermutationDivideConquerMethod();
	virtual void full_permutation(char *t, int len);
	void permutation(char *t,int start, int len);
};

