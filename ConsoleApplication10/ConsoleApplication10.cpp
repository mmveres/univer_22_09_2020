// ConsoleApplication10.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
	char str[N];
	int i=0;
	while (true) {
		cout << "enter int <10, all athor will be ignore";
		cin.getline(str,N);

		cout << strchr(str, '\0');
		if (strchr(str, '\0') == NULL) { 
			cout << "its not valid value, enter <10 digit";
			continue; 
		}

		i = 0;
		bool isValueDigit = true;
		while (str[i] != '\0') {
			if (!isdigit(str[i])) {
				isValueDigit = false;
				break;
			};
			i++;
		}
		if (isValueDigit) {
			i = atoi(str);
			break;
		}
		else
			cerr << "str not digit try again";
	}
	cout << i;
	return 0;
}

