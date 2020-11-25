/* 
    Name: days-gone
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Thu Nov 05 2020
    Description: This program calculates that average amount of days missed for an entire company. 
    It prompts the user for the number of employees and for each employee the user can input the amount of days missed. 
    It then calculates the average of number to days missed for the total amount of employees
 */

 
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

// Function Prototypes
int inputNumberOfEmployees();
int inputEmployeesDays(int inputtedNumOfEmployees);
double averageOfDaysMissed(int numOfEmployees, int totalOfDaysMissed);

// Main Function
int main() {
  int totalNumberOfEmployees = inputNumberOfEmployees();
  int totalNumberOfDaysMissed = inputEmployeesDays(totalNumberOfEmployees);
  double averageDaysMissed = averageOfDaysMissed(totalNumberOfEmployees,totalNumberOfDaysMissed);

  cout << "For the "<< totalNumberOfEmployees << " employees the average amount of days is " << averageDaysMissed<< " days" << endl;
}

// Definition of the inputNumberOfEmployees function
int inputNumberOfEmployees(){ 
  int numberOfEmployees;
  cout << "Please enter the number of employees" << endl;
  // Collets the number of employees 
  cin >> numberOfEmployees;
  while (numberOfEmployees < 1){
    cout << "Inputted amount of employees is less than one please input a amount that is one or greater" << endl;
    cin >> numberOfEmployees;
  }
  return numberOfEmployees;
}

// Definition of the inputEmployeesDays function
int inputEmployeesDays(int inputtedNumOfEmployees){
  int sumOfDays=0;
  
  for (int employeeID = 1; employeeID <= inputtedNumOfEmployees; employeeID++){
    // Prompts for the user for the number of days missed for each employee
    cout << "Please enter the number of days missed for employee " << employeeID << endl;

    int daysMissed;
    cin >> daysMissed;

    while (daysMissed < 0){
      cout << "Inputted amount of days is negative. Please input an amount of days that is equal to or greater than zero" << endl;
      cin >> daysMissed;
    }
    sumOfDays += daysMissed;
  }
  return sumOfDays;
}

// Definition of the averageOfDaysMissed function
double averageOfDaysMissed(int numOfEmployees, int totalOfDaysMissed){
  double casetedTotalOfDaysMissed = totalOfDaysMissed;
  double castedInputNumberOfEmployees = numOfEmployees;
  // Calculates the average of days missed an return that value
  return casetedTotalOfDaysMissed/castedInputNumberOfEmployees;
}