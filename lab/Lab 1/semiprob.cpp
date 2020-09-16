// This program demonstrates a compile error.

// Tevin McQuilkin 

#include <iostream>
using namespace std;

int main()

{
	int number;
	float total;
	for (size_t i = 0; i < 2; i++)
	{
		cout << "Today is a great day for Lab";
		cout << endl << "Let's start off by typing a number of your choice" << endl;
		cin  >> number;
		
		total = number * 2;
		cout << total << " is twice the number you typed" << endl;
	}
	
	
	return 0;
	
}