#include <iostream>
using namespace std;

int main()
{
  double sum = 0;
  
  for (int i = 0; i < 3; i++)
  {
    double temp; 
    int gradeNum = i + 1;
    cout << "input grade number" << gradeNum << endl;
    cin >> temp;
    sum += temp;
  }
	
  cout << sum / 3.0 << endl;

    return 0;	
}