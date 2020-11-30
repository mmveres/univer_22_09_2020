#include "stdafx.h"
#include "Header.h"

void bubblesort(Note*  notes, int& count)
{
	for (size_t i = 0; i < count; i++)
	{
		for (size_t j = 0; j < count - 1 - i; j++)
		{
			if (strcmp(notes[j].fio, notes[j + 1].fio) > 0) {
				Note temp = notes[j];				
				notes[j]=notes[j + 1];
				notes[j + 1]=temp;
			}
		}
	}
}

int mystrcmp(char* str1, char* str2) {
	int length = (strlen(str1) < strlen(str2)) ? strlen(str1) : strlen(str2);
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (str1[i] > str2[i]) return 1;
		if (str2[i] > str1[i]) return -1;
	}
	if (strlen(str1) == strlen(str2)) return 0;
	else
		return (strlen(str1) < strlen(str2)) ? 1 : -1;
}

void fillNoteVasya1(Note &vasya)
{
	strcpy_s(vasya.fio, "Vasil1");
	strcpy_s(vasya.phone, "1");
	vasya.birthday[0] = 31;
	vasya.birthday[1] = 12;
	vasya.birthday[2] = 2000;
}
void fillNoteVasya2(Note &vasya)
{
	strcpy_s(vasya.fio, "Vasil22");
	strcpy_s(vasya.phone, "22");
	vasya.birthday[0] = 31;
	vasya.birthday[1] = 12;
	vasya.birthday[2] = 2000;
}
void fillNoteVasya3(Note &vasya)
{
	strcpy_s(vasya.fio, "Vasil3");
	strcpy_s(vasya.phone, "3");
	vasya.birthday[0] = 31;
	vasya.birthday[1] = 12;
	vasya.birthday[2] = 2000;
}
void fillNoteFromConsole(Note &vasya)
{
	cout << "Enter Name" << endl;
	cin >> vasya.fio;
	//strcpy_s(vasya.fio, "Vasil");
	cout << "Enter phone" << endl;
	cin >> vasya.phone;
	//strcpy_s(vasya.phone, "1234567");
	cout << "Enter day" << endl;
	cin >> vasya.birthday[0];
	//vasya.birthday[0] = 31;
	cout << "Enter month" << endl;
	cin >> vasya.birthday[1];
	//vasya.birthday[1] = 12;
	cout << "Enter year" << endl;
	cin >> vasya.birthday[2];
	//vasya.birthday[2] = 2000;
}

void print(Note &vasya)
{
	cout << "outter = " << vasya.fio << endl << vasya.phone << endl << vasya.birthday[0] << endl << vasya.birthday[1] << endl << vasya.birthday[2] << endl;
}

void Note::print() {
	cout << "inner = " << fio << endl << phone << endl << birthday[0] << endl << birthday[1] << endl << birthday[2] << endl;
};