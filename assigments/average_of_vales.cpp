 /* 
    Name: Average of Values
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Sun Sep 20 2020
    Description: This program assigns a series of variable to representing a range of numbers.
                 Gathers the sum of the ranage and divides that sum by size of the the range to 
                 get the average. Finally it displayed the outputs over stanadard out.
 */

 
  #include <iostream>        
  using namespace std;

  int main (){

    // Variable declarations
    int num1 = 28, num2 = 32, num3 = 37, num4 = 24, num5 = 33;

    // Calculates the sum
    int sum = num1 + num2 + num3 + num4 + num5;

    // Calculates the average
    float average = (float) sum / 5; 

    // Output values
    cout << "Average\n" << average << endl;
    
    return 0;
  }

 