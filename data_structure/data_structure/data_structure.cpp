// data_structure.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "array\MyArray.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	MyArray deArray(0);
	deArray.CalcFactorial(34);
	cout<<deArray<<endl;
	return 0;
}

