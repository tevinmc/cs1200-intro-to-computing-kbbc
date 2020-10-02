/* 
    Name: average_of_vales
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Sat Sep 26 2020
    Description: This is a program that calculates the average of a set of five numbers and output that average to the console over standard output.
 */
 
  #include <iostream>
  #include <iomanip>               
  using namespace std;

  int main (){

    // Declaration of variables for the set of numbers, the sum of those numbers and the average of the set.
    double num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;

    double sum = num1 + num2 + num3 + num4 + num5;

    double average =  sum / 5; 

    // Output statement of the computed average of the set of values 
    cout << "The average of the set of numbers 28,32,37,24,33 : " << average << endl;
    return 0;
  }

 
 
 