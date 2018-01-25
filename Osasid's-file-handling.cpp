#include<iostream>
#include<cstring>
#include<iomanip>
#include<fstream>

using namespace std;
int main()
{
	ifstream fin;
	fin.open("practice.txt");
	char name[10][30];
	int age[10], a = 0;
	char search[20] = { "Ch" };
	int x = strlen(search);
	for (int i = 0; i < 10&& !fin.eof(); ++i)
	{
		fin.get(name[i], 30);
		fin >> age[i];
		fin.ignore();
		cout << name[i] << age[i] << endl;
	}
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 30; ++j)
		{
			for (int k = 0; k < x; ++k)
			{
				if (search[k] == name[i][j + k])
				{
					a++;
				}
				else
				{
					a = 0;
				}
				if (a == k)
					break;
			}
		}
		if (a == x)
		{
			cout << "Data found." << endl;
			age[i] -= 1;
			cout << "new data" << endl;
			cout << name[i] << age[i] << endl;

		}
	}
	ofstream fout;
	for (int i = 0; i < 10; ++i)
	{
		fout << setw(30) << left << name[i] << age << endl;
	}
	

	system("pause");
	return 0;
}