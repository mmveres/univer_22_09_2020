// ConsoleApplication06.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void print10() {
{
		int i = 0;
		while (i < 10) {
			cout << i;
			i++;
		}
	}
}
void taskLesson() {
	print10();

	{
		int i = 100;
		while (true) {
			if (i == 10) break;
			i--;
			if (i == 5) continue;
			cout << i << endl;
		}

	}
	for (int i = 100; i > 10; i--) {
		if (i == 5) continue;
		cout << i << endl;
	}

	for (size_t i = 0; i < 30; i++)
	{

	}
	char answer = 'n';
	do
	{
		cout << "Buy elephant [y/n] 1000000$";
		cin >> answer;
		cin.clear();
		cin.ignore(1000, '\n');
	} while ((answer != 'y') || (answer == 'Y'));
	cout << "okey your balance -";
}
#include <iostream>
#include <conio.h>
using namespace std;

int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	while(true){
	int answer = menu();
	switch (answer)
	{
	case 0: cout << "Не забудьте нажать кнопку 'спасибо'" << endl; break;
	case 1: cout << "Все равно не забудьте нажать кнопку 'спасибо'" << endl; break;
	case 2: cout << "Нажмите кнопку 'спасибо' и на этом разойдемся" << endl; break;
	case 3: cout << "Можете не нажимать кнопку 'спасибо' но если нажмете, я не обижусь" << endl; return 0;
	}
	system("pause");
	if (answer == 0) break;
	}
	return 0;
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> Exit" << endl;
		else  cout << "   Exit" << endl;
		if (key == 1) cout << "-> Меня этот код устраивает." << endl;
		else  cout << "   Меня этот код устраивает." << endl;
		if (key == 2) cout << "-> Я соглашусь на этот код за отсутствием других вариантов." << endl;
		else  cout << "   Я соглашусь на этот код за отсутствием других вариантов." << endl;
		if (key == 3) cout << "-> Я вообще не собираюсь оценивать этот код. Он меня не интересует." << endl;
		else  cout << "   Я вообще не собираюсь оценивать этот код. Он меня не интересует." << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}


