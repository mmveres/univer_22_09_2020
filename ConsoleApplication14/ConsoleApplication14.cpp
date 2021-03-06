// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

#define NUM 3
#define PI 3.14

struct NOTEBOOK
{
	struct disp_res
	{
		int x;
		int y;
	}disp;
	int f;
	float d;
	float hdd;
	char model[21];

	void print()
	{
		cout << disp.x << ", ";
		cout << disp.y << ", ";
		cout << f << ", ";
		cout << d << ", ";
		cout << hdd << ", ";
		cout << model << endl;
	}
};

void create3NoteBooks(NOTEBOOK notes[NUM]);

void sortNoteBooks(NOTEBOOK  notes[NUM]);

void printNoteBooks(NOTEBOOK  notes[NUM]);

void saveToFile(NOTEBOOK  notes[NUM]);

void loadFromFile(NOTEBOOK  notes[NUM]);

int main()
{
	
	NOTEBOOK notes[NUM];
	create3NoteBooks(notes);
	printNoteBooks(notes);
	sortNoteBooks(notes);
	printNoteBooks(notes);

	saveToFile(notes);
	
	loadFromFile(notes);

	printNoteBooks(notes);

    return 0;
}

void loadFromFile(NOTEBOOK  notes[NUM])
{
	ifstream note_file("notes.dat");
	int num;
	note_file.read((char *)&num, sizeof(int));
	for (size_t i = 0; i < num; i++) {
		note_file.read((char *)&notes[i], sizeof(NOTEBOOK));
	}
}

void saveToFile(NOTEBOOK  notes[NUM])
{
	int num = NUM;
	ofstream note_file("notes.dat");
	note_file.write((char *)&num, sizeof(int));
	for (size_t i = 0; i < num; i++) {
		note_file.write((char *)&notes[i], sizeof(NOTEBOOK));
	}
}

void printNoteBooks(NOTEBOOK  notes[NUM])
{
	for (size_t i = 0; i < NUM; i++)
	{
		notes[i].print();
	}
}

void sortNoteBooks(NOTEBOOK  notes[NUM])
{
	for (size_t i = 0; i < NUM; i++)
		for (size_t j = 0; j < NUM - 1 - i; j++)
		{
			if (notes[j].f > notes[j + 1].f) {
				NOTEBOOK temp = notes[j];
				notes[j] = notes[j + 1];
				notes[j + 1] = temp;
			}
		}
}



void create3NoteBooks(NOTEBOOK notes[NUM])
{
	notes[0].disp.x = 1024;
	notes[0].disp.y = 768;
	notes[0].f = 100;
	notes[0].d = 100;
	notes[0].hdd = 256;
	strcpy_s(notes[0].model, "Acer");

	notes[1].disp.x = 1024;
	notes[1].disp.y = 768;
	notes[1].f = 60;
	notes[1].d = 200;
	notes[1].hdd = 128;
	strcpy_s(notes[1].model, "HP");

	notes[2].disp.x = 1024;
	notes[2].disp.y = 768;
	notes[2].f = 75;
	notes[2].d = 300;
	notes[2].hdd = 512;
	strcpy_s(notes[2].model, "Lenovo");
}

