#pragma once
class FullPermutationInterface
{
public:
	FullPermutationInterface();
	virtual ~FullPermutationInterface();
public:
	virtual void full_permutation(char *t, int len) = 0;
protected:
	int times;//the times of full permutation 
};

