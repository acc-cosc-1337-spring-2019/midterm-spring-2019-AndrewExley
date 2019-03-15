#include "die.h"
#include <iostream>

/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/

int main() 
{
	Die die1;			
	die1.roll();
	
	Die die2 = die1;		
	
	
	Die& die3 = die1;		
}

