/* 
    Name: sizeOfValues
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Sat Sep 19 2020
    Description:
 */

#include <iostream>      
#include <string> 
using namespace std;

int main(int argc, const char** argv) {
  int test;
  double testDouble;
  float testFloat;
  char testChar;
  string testString;

  cout <<"char \n" << sizeof(testChar);
  cout <<"\nint \n" << sizeof(test);
  cout <<"\nfloat \n" << sizeof(testFloat);
  cout <<"\ndouble \n" << sizeof(testDouble);
  cout <<"\nString \n" << sizeof(testString)<< endl;
  

  return 0;
}