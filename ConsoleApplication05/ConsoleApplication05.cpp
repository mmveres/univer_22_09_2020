// ConsoleApplication05.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "LibIfSwitch.h"
using namespace std;

int mainMenu() {
	system("CLS");
	setlocale(LC_ALL, "Ukrainian_Ukraine.1251");
	cout << "1. Даны 4 числа типа int. Сравнить их и вывести наименьшее на консоль." << endl;
	cout << "2. Вывести на консоль количество максимальных чисел среди этих четырех." << endl;
	cout << "3. Даны 5 чисел (тип int). Вывести вначале наименьшее, а затем наибольшее из данных чисел." << endl;
	cout << "4. Дано число месяца (тип int). Необходимо определить время года (зима, весна, лето, осень) и вывести на консоль. через case" << endl;
	cout << "5. Дано число месяца (тип int). Необходимо определить время года (зима, весна, лето, осень) и вывести на консоль. через if" << endl;
	cout << "0. Exit";
	int choice = 0;
	cin >> choice;
	return choice;
}
int main() {
	while (true) {
		int choice = mainMenu();
		if (choice == 0) break;
		switch (choice)
		{
		case 1: findMinMax4(); break;
		case 2: findCountOfMaxValue(); break;
		case 3: findMaxMin5(); break;
		case 4: findSeasson(); break;
		case 5: findSeassonIf(); break;
		default: cout << "Error choice"; break;
		}
		system("PAUSE");
	}
	//cin.get();
	return 0;

}











