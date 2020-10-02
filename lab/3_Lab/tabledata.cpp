//  This program will bring in two prices and two quantities of items 
//  from the keyboard and print those numbers in a formatted chart.

//PLACE YOUR NAME HERE

#include <iostream>
// #include <string>  // Fill in the code to bring in the library for 
 #include <iomanip>       // formatted output.
using namespace std;


int main()

{
	float price1, price2;	      // The price of 2 items
	int   quantity1, quantity2;   // The quantity of 2 items


	cout << setprecision(2) << fixed << showpoint;
	cout << "Please input the price and quantity of the first item" << endl;

	// Fill in the input statement that reads in price1 and 
	// quantity1 from the keyboard.
  cout << "PRICE 1" << endl;
  cin >> price1;
  cout << "Quantity 1" << endl;
  cin >> quantity1;

	// Fill in the prompt for the second price and quantity.
	cout << "Please input the price and quantity of the second item" << endl;
	// Fill in the input statement that reads in price2 and 
	// quantity2 from the keyboard.
  cout << "PRICE 2" << endl;

  cin >> price2;

  cout << "Quantity 2" << endl;

  cin >> quantity2;
	// Fill in the output statement that prints the first price 
	// and quantity. Be sure to use setw() statements.
	cout << setw(15) << "PRICE" << setw(12) << "QUANTITY\n\n";
	// Fill in the output statement that prints the second price
	// and quantity.
	cout << setw(15) << price1 << setw(6) << quantity1 << endl;
  cout << setw(15) << price2 << setw(6) << quantity2 << endl;
	return 0;

}