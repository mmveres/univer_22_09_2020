#pragma once
#include "stdafx.h"
#include <string.h>
#include <iostream>
//#pragma warning(disable : 4996)
using namespace std;
struct Note {
	char fio[50];
	char phone[20];
	int birthday[3];

	void print();
};

void print(Note &vasya);
void fillNoteVasya1(Note &vasya);
void fillNoteVasya2(Note &vasya);
void fillNoteVasya3(Note &vasya);
void fillNoteFromConsole(Note &vasya);
int mystrcmp(char* str1, char* str2);
void bubblesort(Note*  notes, int& count);