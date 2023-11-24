#ifndef SAVINGS_H
#define SAVINGS_H
#include <string>
#include <iostream>

class Savings:public Account{
    public:
        double interestRate;                    // variable to store interest rate
        Savings(string aNum,int bal);           // constructor
        void ApplyInterest(double interest);    // function to add interest
        void ShowBalance();                     // function to show balance
};

#endif // SAVINGS_H
