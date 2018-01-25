#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int yams[3] = {12,24,36};
	yams[4] = 78;
	cout << yams[4]<< endl;
	int yamscosts[3] = {40,80,120};
	cout << "The package with " << yams[0] << " yams costs " << yamscosts[0] << " cents per yam.\n";
	cout << "The package with " << yams[1] << " yams costs " << yamscosts[1] << " cents per yam.\n";
	cout << "The package with " << yams[2] << " yams costs " << yamscosts[2] << " cents per yam.\n";
	int total;
	total = yams[0] * yamscosts[0] + yams[1] * yamscosts[1] + yams[2] * yamscosts[2];
	cout << "The total cost of all the yams in all the packages is = " << total << endl;
	cout << "The size of yams array = " << sizeof(yams) << "bytes" << endl;
	cout << "The size of one element of yams array = " << sizeof(yams[0]) << "bytes" << endl;

	system("pause");
	return 0;
}
