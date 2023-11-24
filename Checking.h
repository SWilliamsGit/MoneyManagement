#ifndef CHECKING_H
#define CHECKING_H
#include <string>
#include <iostream>

class Checking:public Account{
    public:
        double checkFee;                    // variable to store fee
        Checking(string aNum,int bal);      // constructor
        void ApplyFee(double fee);          // function to deduct fee to balance
        void ShowBalance();                 // function to show balance
};


#endif // CHECKING_H
