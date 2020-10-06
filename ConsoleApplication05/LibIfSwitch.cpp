#include "stdafx.h"
#include <iostream>
#include "LibIfSwitch.h"
using namespace std;

int findmin(int x, int y) {
	if (x <= y)
		return x;
	else
		return y;
}
int findmax(int x, int y) {
	if (x >= y)
		return x;
	else
		return y;

}
//1. ���� 4 ����� ���� int. �������� �� � ������� ���������� �� �������.
void findMinMax4()
{

	int a, b, c, d;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	cout << "Enter d:";
	cin >> d;
	int min = a;
	int max = b;
	min = findmin(d, findmin(c, findmin(a, b)));
	max = findmax(d, findmax(c, findmax(a, b)));
	cout << "Minimum:" << min << endl;
}
//2. ������� �� ������� ���������� ������������ ����� ����� ���� �������.
void findCountOfMaxValue()
{

	int a, b, c, d;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	cout << "Enter d:";
	cin >> d;
	int max = findmax(d, findmax(c, findmax(a, b)));
	int n = 0;
	if (a == max)
		n++;
	if (b == max)
		n++;
	if (c == max)
		n++;
	if (d == max)
		n++;
	cout << "Number max:" << n;
}
//3. ���� 5 ����� (��� int). ������� ������� ����������, � ����� ���������� �� ������ �����.
void findMaxMin5()
{
	int a1, b1, c1, d1, f1;
	cout << "Enter a1:";
	cin >> a1;
	cout << "Enter b1:";
	cin >> b1;
	cout << "Enter c1:";
	cin >> c1;
	cout << "Enter d1:";
	cin >> d1;
	cout << "Enter f1:";
	cin >> f1;
	int min = findmin(f1, findmin(d1, findmin(c1, findmin(a1, b1))));
	int max = findmax(f1, findmax(d1, findmax(c1, findmax(a1, b1))));
	cout << "Min=" << min << endl;
	cout << "Max=" << max << endl;
}
//4. ���� ����� ������ (��� int). ���������� ���������� ����� ���� (����, �����, ����, �����) � ������� �� �������.
//����� case:
void findSeasson()
{
	cout << "Enter month 1-12 ";
	int N;
	cin >> N;
	switch (N) {
	case 12:  
	case 1: 
	case 2: cout << "Winter"; break;
	case 3: 
	case 4: 
	case 5: cout << "Spring"; break;
	case 6: 
	case 7: 
	case 8: cout << "Summer"; break;
	case 9: 
	case 10: 
	case 11: cout << "Autumn"; break;
	default: cout << "Error month"; break;
	}
}
//5. ���� ����� ������ (��� int). ���������� ���������� ����� ���� (����, �����, ����, �����) � ������� �� �������.
// ����� if
void findSeassonIf()
{

	int N1;
	cout << "Enter month 1-12 ";
	cin >> N1;
	if ((N1 < 3) || N1 == 12)
		cout << "Winter" << endl;
	else if (N1 < 6)
		cout << "Spring" << endl;
	else if (N1 < 9)
		cout << "Summer" << endl;
	else if (N1 < 12)
		cout << "Autumn" << endl;
}