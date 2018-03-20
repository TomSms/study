#pragma once
#define ARRAYLEN(x) sizeof(x)/sizeof(x[i])
#define DEBUG 0
class Tools
{
public:
	Tools();
	~Tools();
	static void swap(char *arr, int i, int j, int len);
};

