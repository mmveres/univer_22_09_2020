// ConsoleApplication11.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "Header.h"
//#pragma warning(disable : 4996)

int main()
{
	char a = 'a';
	int x = 98;
	cout << a <<" = "<< (int)a;
	cout << x << " = " << (char)x;
	Note notes[3];
	fillNoteVasya1(notes[0]);
	fillNoteVasya3(notes[1]);
	fillNoteVasya2(notes[2]);
	for (Note note : notes) {
		note.print();
	}

	int count = sizeof(notes) / sizeof(Note);

	bubblesort(notes, count);
	for (Note note : notes) {
		note.print();
	}
	return 0;
}



