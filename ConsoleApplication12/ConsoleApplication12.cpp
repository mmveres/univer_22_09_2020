// ConsoleApplication12.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
// факториал n! = n*(n-1)!   5! = 5* 4* 3* 2* 1      1! = 1 0!= 1   2! = 2 * 1!
int factR(int n) {
	cout <<"rec ="<< n << endl;
	if (n == 1 || n == 0) return 1;
	return n * factR(n - 1);
}

int factI(int n) {
	int x = 1;
	if (n == 1 || n == 0) return 1;
	for (size_t i = 2; i <= n; i++)
	{
		x = x * i;
		cout <<"iter ="<< i << endl;
	}
	return x;
}

// фібоначи fib(n) = fib(n-1)+fib(n-2)   fib(0) = 0  fib(1)= 1 fib(2) = 1
int fibR(int n) {
	cout << "rec =" << n << endl;
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibR(n - 1) + fibR(n - 2);
}

int fibI(int n) {	
	if (n == 0) return 0;
	if (n == 1) return 1;
	int x(0), y(1), z(1);
	for (size_t i = 2; i <= n; i++)
	{
		z = y + x;
		x = y;
		y = z;
		cout << "iter =" << i << endl;
	}
	return z;
}


int main()
{
	cout << fibR(20)<<endl;
	cout << fibI(20)<<endl;
    return 0;
}

