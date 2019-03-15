#include"die.h"
#include<iostream>
using std:: cout;
using std:: cin;

//Write include statement
/*
Program runs until user opts out.
For each loop Roll die and display output
*/

int main() 
{
	Die die;
	char choice;

	do 
	{
		cout << "Rolling the die. \n";
		die.roll();
		cout <<"Roll Value: "<< die.rolled_value() << "\n";
		cout << "Do you want to roll again? " << "\n";
		cout << "Enter 'Y' to try again or enter any other key to exit" << "\n";
		cin >> choice;

	} while (userChoice == 'Y' || userChoice == 'y');
	
	return 0;
}