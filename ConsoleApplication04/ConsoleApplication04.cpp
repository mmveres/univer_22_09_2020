// ConsoleApplication04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int task1v1() {
	int a(1), b = 3, c(4), d(4);

	if ((a >= b) && (a >= c) && (a >= d)) cout << a;
	if ((b >= a) && (b >= c) && (b >= d)) cout << b;
	if ((c >= b) && (c >= a) && (c >= d)) cout << c;
	if ((d >= b) && (d >= c) && (d >= a)) cout << d;
}
int task1v2() {
	int a(1), b = 3, c(4), d(4);
	int mymax = a;
	if (b >= mymax) mymax = b;
	if (c >= mymax) mymax = c;
	if (d >= mymax) mymax = d;
	cout << mymax;
}
int findMax(int x, int y) {
	if (x > y) return x;
	else return y;
}
int main()
{
	int a(1), b=3, c(4), d(4);
	int mymax = findMax(a,findMax(b,findMax(c,d)));
	
}

