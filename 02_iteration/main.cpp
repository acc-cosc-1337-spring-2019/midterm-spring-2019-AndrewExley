//write include statement
#include"fibonacci.h"
#include<iostream>
#include<string>
using std::cout;
using std:: cin;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/


int main() 
{
	char choice;
	int num;
	do {
			cout << "Enter the number which you want the fibonacci series: ";
			cin >> num;

			string s = get_fibonacci(num);
			cout << "Displaying fibonacci series: " << num;
			cout << s;
		
			cout<<"Continue?" ;
			cout << "Enter 'Y' to continue. To quit program, press another key: ";
			cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	std::cout << "Program quit ";

	return 0;
}