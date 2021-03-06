// ConsoleApplication09.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void fillMatrixStatic(const int &MROW, const int &NCOL, int  matrix[2][3]);
void printMatrixStatic(const int &MROW, const int &NCOL, int  matrix[2][3]);
void matrixStatic();

void fillMatrixDynamic(const int& m, const int& n, int ** pmatrix);
void printMatrixDynamic(const int& m, const int& n, int ** pmatrix);
void matrixDynamic();

int main()
{
	matrixDynamic();

    return 0;
}

void matrixDynamic()
{
	int m = 2;
	int n = 3;
	int** pmatrix = new int*[m];
	for (size_t i = 0; i < m; i++)
	{
		pmatrix[i] = new int[n];
	}

	fillMatrixDynamic(m, n, pmatrix);

	printMatrixDynamic(m, n, pmatrix);

	for (size_t i = 0; i < m; i++)
	{
		delete[] pmatrix[i];
	}
	delete[] pmatrix;

}

void printMatrixDynamic(const int& m,const int& n, int ** pmatrix)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			cout << pmatrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void fillMatrixDynamic(const int& m,const int& n, int ** pmatrix)
{
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			pmatrix[i][j] = i + j;
		}
	}
}

void matrixStatic()
{
	const int MROW = 2;
	const int NCOL = 3;
	int matrix[MROW][NCOL];

	cout << matrix << endl;
	cout << matrix[0] << endl;
	cout << &matrix[0][0] << endl;

	fillMatrixStatic(MROW, NCOL, matrix);

	printMatrixStatic(MROW, NCOL, matrix);
}

void printMatrixStatic(const int &MROW, const int &NCOL, int  matrix[2][3])
{
	for (size_t i = 0; i < MROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void fillMatrixStatic(const int &MROW, const int &NCOL, int  matrix[2][3])
{
	for (size_t i = 0; i < MROW; i++)
	{
		for (size_t j = 0; j < NCOL; j++)
		{
			matrix[i][j] = i + j;
		}
	}
}

