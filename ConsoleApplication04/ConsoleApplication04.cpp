// ConsoleApplication04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
void task1v1() {
	int a(1), b = 3, c(4), d(4);

	if ((a >= b) && (a >= c) && (a >= d)) cout << a;
	if ((b >= a) && (b >= c) && (b >= d)) cout << b;
	if ((c >= b) && (c >= a) && (c >= d)) cout << c;
	if ((d >= b) && (d >= c) && (d >= a)) cout << d;
	 
}
int findMax(int a, int b, int c, int d) {
//	int a(1), b = 3, c(4), d(4);
	int mymax = a;
	if (b >= mymax) mymax = b;
	if (c >= mymax) mymax = c;
	if (d >= mymax) mymax = d;
	return mymax;
}

int countOfMaxValue(int a,int b, int c, int d) {
	int mymax = findMax(a, b, c, d);
	int countMax = 0;
	if (mymax == a) countMax++;
	if (mymax == b) countMax++;
	if (mymax == c) countMax++;
	if (mymax == d) countMax++;
	return countMax;
}

int findMax(int x, int y) {
	if (x > y) return x;
	else return y;
}
int main()
{
	int a(1), b=3, c(4), d(4);
	//int mymax = findMax(a,findMax(b,findMax(c,d)));

	cout << countOfMaxValue(a, b, c, d);
	
}

