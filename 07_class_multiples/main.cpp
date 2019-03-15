#include"shooter.h"
#include<iostream>
#include<vector>
using std::cout;
using std:: cin;
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.
In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	char Choice;
	do {
		Die die1;
		Die die2;
		Shooter shootObject;
		std::vector<Roll>rollVector;

		for (int i = 0; i < 10; i++) 
		{

            Roll rollObject = shootObject.shoot(die1, die2);
			rollVector.push_back(rollObject);
		}
		for (auto c : rollVector)
		{
			cout << "Roll_value_1: " << c.value_1() << "\n";
			cout << "Roll_value_2: " << c.value_2() << "\n";
			cout << "Results: " << c.result() << "\n";
		}

		cout << "Continue? Enter 'Y' to continue to exit press another key: ";
		cin >> Choice;
	} while (Choice == 'Y' || Choice == 'y');

	return 0;
}