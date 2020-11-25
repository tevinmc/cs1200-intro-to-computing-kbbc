/* 
    Name: speed_of_sound
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Sat Oct 17 2020
    Description: This program prompts the users for to pick one of there mediums for sound to travel. 
    Once picked it assign that mediums speed per seconds and then prompts of the distance traveled. 
    After both values are received it calculates the distance traveled in seconds and outputs the time it would take for the sound to travel that distance throught the selected medium. 
 */

  #include <iostream>
  #include <cmath>
  #include <typeinfo>
  #include <iomanip>

  using namespace std;

  int main (){

    // Prompts the users for both the medium and distance the sound wave is to travel.
    int inputtedMedium;
    double speed;
    
    cout << "Enter a medium" << endl;
    cout << " 1) air \n" << " 2) water \n" << " 3) steel" << endl;
    cin >> inputtedMedium;
    switch (inputtedMedium)
    {
      case 1: speed = 1100; break;
      case 2: speed = 4900; break;
      case 3: speed = 16400; break;

      default: cout << "Please input one of the mediums above 1. air 2. water or 3. steel" << endl; return 1; break;
    }

    double distance,time;
    cout << "Enter the distance a sound wave will travel in the selected medium" << endl;
    cin >> distance;

    if(distance >= 0){
      // Calculates the time the sound waves take travel a the inputted distance along the selected medium
      time = distance/speed;
    }
    else{
      cout << "Please enter a valid distance that it greater or equal to zero" << endl;
      return 1;
    }
    // Outputs the calculated time in seconds 
    cout << setprecision(4) << fixed << "It will take "<< time << " seconds for the sound wave to travel "<< distance <<"feet"<< endl;
    return 0;
  }
 