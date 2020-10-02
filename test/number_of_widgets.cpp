#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  const double WEIGHT_OF_WIDGET= 9.2;
  double palletWeight;
  double palletWeightWithWidget;
  int numberOfWidgets;

  cout <<"Input total weight of pallet \n" << endl;
  cin >> palletWeight;
  
  cout << "Input total weight of pallet with widgets on pallet \n" << endl;
  cin >> palletWeightWithWidget;

  numberOfWidgets = WEIGHT_OF_WIDGET / (palletWeightWithWidget - palletWeight);

  cout <<"Total number of widgets on the pallet \n"<< numberOfWidgets << endl;

    return 0;	
}