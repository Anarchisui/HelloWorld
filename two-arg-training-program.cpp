#include "stdafx.h"
#include <iostream>

using namespace std;
void n_chars(char, int);
int main()
{
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	while (ch != 'q') // q to quit
	{
		cout << "Enter an integer: ";
		cin >> times;
		n_chars(ch, times); // function with two arguments
		cout << "\nEnter another character or press the"
			" q-key to quit: ";
		cin >> ch;
	}
		cout << "The value of times is " << times << ".\n";
		cout << "Bye\n";
	
	return 0;
}
void n_chars(char c, int n) // displays c n times
{
	while (n-- > 0) // continue until n reaches 0
		cout << c;
}
/* There are two errors in this program 
 1- It does not quit if the 'q' key is pressed when it is executed for the first time
 2- It goes on an infinite loop if a character is pressed at the time it is expecting an int
*/