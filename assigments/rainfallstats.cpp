/* 
    Name: rainfallstats
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Sat Nov 14 2020
    Description: This program grabs the total calculates rain statics  for a year. I takes in user input and displays the total, average, lowest and highest amounts for rain throughout a years amount of input.
 */

#include <iostream>
using namespace std;

// defining global rainfall colllection array for holding user data and defining the protypes for the functions that will be calculating data from it
typedef double RainfallCollection [12];

double getAverage (double total);  
int getHighestMonth (const RainfallCollection); 
int getLowestMonth  (const RainfallCollection);
double getTotal  (const RainfallCollection);


int main(){
  RainfallCollection rainfallArray;
  int month = 0;
  cout << "Please input a the rain fall for each month ranging from 1 to 12"<< endl;
  cin >> rainfallArray[month];

  // Grabbing user data  for each month in the rainFall Array
  while (month < 12){
    if(rainfallArray[month] < 0){
      cout << "Negative input for month " << month + 1<< ". Please Input a non-negative number" << endl;
      cin >> rainfallArray[month];
    }
    else{
      month += 1;
      cin >> rainfallArray[month];
    }
  }

  double total = getTotal(rainfallArray);
  double average = getAverage(total);
  int highestMonth = getHighestMonth(rainfallArray);
  int lowestMonth = getLowestMonth(rainfallArray);

  cout <<"The Total rainfall for the year was " << total << endl;
  cout <<"The Average rainfall was " << average <<endl;
  cout <<"The Month with the highest amount of rain was month " << highestMonth + 1 << " " << rainfallArray[highestMonth] << endl;
  cout <<"The Month with the lowest amount of rain was month " << lowestMonth + 1 << " " << rainfallArray[lowestMonth] << endl;

}

// Calculates the total rainfall for each given month 
double getTotal  (const RainfallCollection array){
  double total = 0;
  for (int i = 0; i < 12; i++){
    total += array[i];
  }
  return total;
}

// Calculates the average rain fall based on the inputted totat
double getAverage (double total){
  return total / 12;
}

// Return the higest month which is the index of the higest value of the RainfallCollection array
int getHighestMonth (const RainfallCollection array){
  double highest = array[0];
  int currentHighestMonth = 0;

  for (int i = 1; i < 12; i++){
    if(highest < array[i]){
      highest = array[i];
      currentHighestMonth = i;
    }
  }

  return currentHighestMonth;
}
// Returns the lowest month which is the index of the lowest value of the RainfallCollection array
int getLowestMonth  (const RainfallCollection array){
  double lowest = array[0];
  int currentLowestMonth = 0;

  for (int i = 1; i < 12; i++){
    if(lowest > array[i]){
      lowest = array[i];
      currentLowestMonth = i;
    }
  }

  return currentLowestMonth;
}
