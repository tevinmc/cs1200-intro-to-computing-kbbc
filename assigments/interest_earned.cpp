 /* 
    Name: Interest Earned
    Copyright: MIT 2020
    Author: Tevin McQuilkin
    Date: Fri Oct 02 2020
    Description: This program calculates the balance of a savings account after one year use this formula Amount = Principal *(1 +(Rate/T))^T.
                 Once calculated it genrates a report showing associated data for the report and the total amount in the saving account.
 */

  #include <iostream>
  #include <cmath>
  #include <iomanip>

  using namespace std;

  int main (){

    // Prompts the user to input principal balance, interest rate and the number of times said interest has compounded it then calculates the amount in saving
    double inputedInterestRate, principalBalance, interestRateAsDecimal;
    float timesCompounded;

    cout << "Input Principal Balance \n"<< endl;
    cin >> principalBalance;
    
    cout << "Input interest rate \n"<< endl;
    cin >> inputedInterestRate;
    interestRateAsDecimal = inputedInterestRate / 100;

    cout << "Input times interest has compounded \n"<< endl;
    cin >> timesCompounded;

    double amountInSaving = principalBalance * pow(1+(interestRateAsDecimal/timesCompounded),timesCompounded);

    // Outputs the report of the calculated amount in saving along with associated data for genrating the report
    cout << setw(30) << "Interest Earned Report \n" << endl;
    cout << setprecision(2) << fixed << endl;
    cout << "Interest Rate:" << setw(21)  <<  inputedInterestRate <<"%" << "\n"<< endl;
    cout << "Times Compounded:"<< setw(18)<< (int) timesCompounded << "\n"<< endl;
    cout << "Principal:" << setw(18)<< "$ "<< principalBalance << "\n"<< endl;
    cout << "Interest:"<< setw(21) << "$ "<< amountInSaving - principalBalance << "\n"<< endl;
    cout << "Amount in savings:"<< setw(10)<<"$ "<< amountInSaving << "\n"<< endl;
    return 0;
  }
 
 
 