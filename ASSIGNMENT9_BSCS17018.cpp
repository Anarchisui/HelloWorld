// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


void donation();
void viewdonations();
void searchdonations();


int main()
{

	char choice;


	while (true)
	{
		cout << "********************************************************************" << endl;
		cout << "                   Charity Donation System.                         " << endl;
		cout << "********************************************************************" << endl;
		cout << "Press D to make a donation" << endl;
		cout << "Press V to view all donations" << endl;
		cout << "Press S to search donations" << endl;
		cout << "Preas Q to quit." << endl << endl;

		cout << "------- Please enter your choice: ";
		choice = _getch();

		switch (choice)
		{
		case 'D':
		case 'd':
			donation();
			break;
		case 'V':
		case 'v':
			viewdonations();
			break;
		case 'S':
		case 's':
			searchdonations();
			break;
		case 'Q':
		case 'q':
			return 0;
			break;

		}
		system("cls");
	}
	return 0;
}


void donation()
{

	ofstream fout;
	fout.open("donations.txt", ios::out | ios::app);
	char name[30];
	int donation;

	cout << endl << "Please enter donor's name: ";
	cin.getline(name, 30);
	cout << "Please enter donation amount: ";
	cin >> donation;
	cin.ignore();
	fout << setw(30) << left << name << donation << endl;

	fout.flush();
	fout.close();
}
void viewdonations()
{
	cout << endl << endl;
	ifstream fin;
	fin.open("donations.txt", ios::in);
	char data[50];

	while (!fin.eof())
	{
		fin.getline(data, 50);
		cout << data << endl;
	}

	system("pause");
}


void searchdonations()
{
	cout << endl << endl;
	char searchstring[30];
	char name[30];
	int temp;
	ifstream fin;
	fin.open("donations.txt", ios::in);

	cout << "Please enter the donor name to search:";
	cin.getline(searchstring, 30);

	while (true)
	{
		fin.get(name, 30);

		fin >> temp;
		fin.ignore();
		if (strncmp(name, searchstring, strlen(searchstring)) == 0)
		{
			cout << "Data Found!" << endl;
			cout << name << "," << temp << endl;
			system("pause");
			return;
		}
		if (strlen(name) == 0)
			break;


	}
	cout << "Data not found" << endl;


	system("pause");
}
