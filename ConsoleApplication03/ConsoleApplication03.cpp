// ConsoleApplication03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "ConsoleApplication03.h"
using namespace std;

void task1() {
char ch = '0';
	cout << ch << " = " << (int)ch << endl;
	cout << "Enter symbol" << endl;
	int x;
	cin >> x;
	cout << x << " = " << (char)x;
}
int sum(int x, int y) {
	int result = x + y;
	return result;
}
void task2()
{
	int x = 2;
	int y = 3;
	int z = abs(2 - 3);

	cout << sum(x, y) << endl;
	cout << sum(24, 65) << endl;
	cout << sum(214, 165) << endl;
	cout << sum(24, 65) << endl;
	cout << sum(24, 65) << endl;
}
void taskLogicalOperation()
{
	int x = 5, y(7);
	bool iscorrect = x < 56 && x>0;
	cout << ((iscorrect == 1) ? "true" : "false");
}
int main()
{
	int x = 5, y = 6;
	cout << (x << 1);
	return 42;
}





