/* 
  Name: Population
  Copyright: MIT 2020
  Author: Tevin McQuilkin
  Date: Sat Oct 24 2020
  Description: This program takes the input of population size, daysofpopulation multiplaction and average rate of multiplication to show case to calculate the rate of population growth.
                It then iterates throught the range of days and calculates the current population size for eachday and displays it to the users. 
*/

#include <iostream>
#include <iomanip>
using namespace std;
 
int main (){

  // Prompts the users for inputs with validation for each input to match formula parameters.
  int startNumberOfOrganisms,daysOfMultiplation;
  double avgPopulationIncrease,currentPopulationSize;

  cout << "Please input the starting number of organisms" << endl;

  cin >> startNumberOfOrganisms;

  if(startNumberOfOrganisms < 2){
    cout << "Invalid population size must input a population of 2 or greater" << endl;
    return 1;
  }
  currentPopulationSize = (double)startNumberOfOrganisms;

  cout << "Please input the number of day that the population will grow" << endl;

  cin >> daysOfMultiplation;

  if(daysOfMultiplation < 1){
    cout << "Invalid amount of days must input an amount of days that is 1 or greater" << endl;
    return 1;
  }

  cout << "Please input the rate of the popultion will increase in terms of percentage" << endl;

  cin >> avgPopulationIncrease;

  if(avgPopulationIncrease < 0){
    cout << "Invalid rate of increase must input a rate of 0 or greater" << endl;
    return 1;
  }

  avgPopulationIncrease = avgPopulationIncrease / 100;

  // Calculates the growth of a given day and diplays the result to the user
  for (int i = 1; i <= daysOfMultiplation; i++)
  {
    cout << setprecision(2) << fixed;
    cout << "Population at day " << setw(4) << i <<  setw(30) << currentPopulationSize << endl;
    currentPopulationSize = currentPopulationSize + (currentPopulationSize * avgPopulationIncrease);
  }
    
  return 0;
}
 