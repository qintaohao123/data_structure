#include "stdafx.h"

#pragma once
#include <iostream>
using namespace std;
class MyArray
{
public:
	MyArray(int n);
	~MyArray(void);

	int m_oneD_array[40];
	int m_twoD_array[40][40];
    int digit;

	void CalcFactorial(int n);
	friend ostream &operator<<(ostream &output, MyArray &d);
};

