/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/
include"fibonacci.h"

std::string get_fibonacci(int number)
{
	std::string series="0";
	int v1 = 0;
	int v2 = 1;
	int v3 = 0;
	while (v3 <= number)
	{
		
		series = series +"  "+ std::to_string(v2); 
		v3 = v1 + v2;
		v1 = v2;
		v2 = v3;
		
		
	}
	return series;
}