// ConsoleApplication07.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void square(int start = 0, int end = 9)
{
	for (size_t i = start; i <= end; i++)
	{
		for (size_t j = start; j <= end; j++)
		{
			if (i == start || i == end || j == start || j == end)
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
void ptriangle(int start = 0, int end = 9)
{
	for (size_t i = start; i <= end; i++)
	{
		for (size_t j = start; j <= end; j++)
		{
			if (i == end || j == start || j == i)
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
void rtriangle(int start = 0, int end = 9)
{
	int middle = (end - start) / 2;
	for (size_t i = start; i <= middle; i++)
	{
		for (size_t j = start; j <= end; j++)
		{
			if (i == middle || j == middle + i || j == middle - i)
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
void reversetriangle(int start = 0, int end = 9)
{
	int middle = (end - start) / 2;
	for (size_t i = start; i <= middle; i++)
	{
		for (size_t j = start; j <= end; j++)
		{
			if (i == start || j == start + i || j == end - i)
				cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
void romb(int start = 0, int end = 9) {
	int middle = (end - start) / 2;
	for (size_t i = start; i <= end; i++)
	{
		for (size_t j = start; j <= end; j++)
		{
			if((i< middle && (j == middle + i || j == middle - i))
				|| (i >= middle && (j == start + (i - middle) || j == end - (i -middle))))
					cout << " *";
			else
				cout << "  ";
		}
		cout << endl;
	}
}
int main()
{
	int x = 1;
	cout << "value ="<< x<<", address = "<<&x<<endl;
	const int length = 10;
	int mas[length];	
	int count = sizeof(mas) / sizeof(int);
	cout << "sizeof(mas) =" << sizeof(mas) << endl;
	cout << "sizeof(int) =" << sizeof(int) << endl;
	cout << "count elem in mas =" << count << endl;
	mas[0] = 321;
	mas[1] = 22;
	mas[2] = 33;
	x = mas[1];
	cout << "address mas = "<< mas <<"value mas = "<<*mas<< endl;
	cout << "value =" << mas[0] << ", address = " << &mas[0] << ", value = " << *(&mas[0])<< endl;
	cout << "value =" << mas[1] << ", address = " << &mas[1] << endl;
	cout << "value =" << mas[2] << ", address = " << &mas[2] << endl;
	
	for (size_t i = 0; i < length; i++)
	{
		cout << "mas[" << i << "] = ";
		cin >> mas[i] ;
	}

	for (size_t i = 0; i < length; i++)
	{
		cout <<"mas["<<i<<"] = "<< mas[i]<<endl;
	}

	int mymax = mas[0];
	for (size_t i = 0; i < length; i++)
	{
		 if (mymax<mas[i]) mymax = mas[i];
	}
	cout << "max =" << mymax;

	return 0;
}

