// ConsoleApplication01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;
int main()
{
	double x = 0.00000000000000000000000010;
	double y = 0.00000000000000000000000020;
	float eps = 0.01f;
	bool isequal = abs(x-y)<eps;	
	cout << (x==y);
    return 0;
}

