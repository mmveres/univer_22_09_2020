// ConsoleApplication08.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "ConsoleApplication08.h"

using namespace std;
void printMas(int n, int* pmas)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << "mas[" << i << "] =" << pmas[i] << endl;
	}
}
void resizeArray(const size_t &i, int &n, int* &pmas)
{
	if (i == n) {

		int* temp_mas = new int[n * 2];
		for (size_t i = 0; i < n; i++)
		{
			temp_mas[i] = pmas[i];
		}
		delete[] pmas;
		pmas = temp_mas;
		n = n * 2;
	}
}
void fillMas(int& n, int* &pmas)
{
	for (size_t i = 0; i < 5; i++)
	{
		resizeArray(i, n, pmas);
		pmas[i] = i;
	}
}


void dynamicArray()
{
	int n = 3;
	cout << "enter count of mas";
	cin >> n;
	int* pmas = new int[n];

	int x = 2;
	int* px = &x;
	cout << x << " - " << &x << endl;
	cout << px << " - " << *px << endl;
	int y = 3;
	cout << y << " - " << &y << endl;
	px = &y;
	cout << px << " - " << *px << endl;

	fillMas(n, pmas);

	printMas(n, pmas);
}





void swapXY(int* px, int* py)
{
	int t = *px;
	*px = *py;
	*py = t;
}

void swapXYRef(int& rx, int& ry)
{
	int t = rx;
	rx = ry;
	ry = t;
}

int main()
{
	int x = 22;
	int y = 33;
	swapXY(&x, &y);
	cout <<"x= "<< x << " , y= " << y << endl;
	swapXYRef(x, y);
	cout << "x= " << x << " , y= " << y << endl;
	dynamicArray();
    return 0;
}

