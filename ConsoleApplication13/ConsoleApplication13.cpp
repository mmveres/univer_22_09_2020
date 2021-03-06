// ConsoleApplication13.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Product {
	char name[20];
	int price;
	double weight;
};

void saveToFileTxt(Product p) {
	ofstream p_file("nproduct.txt");
	p_file << p.name;
	p_file << p.price;
	p_file << p.weight;
}

void loadFromFileTxt(Product p) {
	ifstream p_file("nproduct.txt");
	p_file >> p.name;
	p_file >> p.price;
	p_file >> p.weight;
	cout << "P :" << p.name << p.price << p.weight;
}
void saveToFileBin(Product &p) {
	ofstream p_file("binproduct.txt");
	p_file.write((char*) &p, sizeof(Product));	
}
void loadFromFileBin(Product &p) {
	ifstream p_file("binproduct.txt");
	p_file.read((char*)&p, sizeof(Product));
	cout << "P :" << p.name << p.price << p.weight;
}


int main()
{
	Product p;
	strcpy_s(p.name , "Apple");
	p.price = 10;
	p.weight = 2.4;
	saveToFileBin(p);
	loadFromFileBin(p);
    return 0;
}

