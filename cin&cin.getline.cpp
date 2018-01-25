#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	char FirstName[100];
	char LastName[100];
	/*cout << "Enter your first name :";    The problem with this code is that cin is designed to end taking input when it
	cin >> FirstName;                       encounters any blank space including enter      
	cout << "Enter your last name:";
	cin >> LastName;
	cout << "Your full name is :" << FirstName << LastName << endl;
	*/
	cout << "Enter your first name :";
	cin.getline(FirstName, 100);            // This problem is fixed by using cin.getline because it is designed to
	cout << "Enter your last name:";        // end taking input only when it encounters a return key i.e. Enter
	cin.getline(LastName, 100);
	cout << "Your full name is :" << FirstName << " " << LastName << endl;
	system("pause");
	return 0;
}
