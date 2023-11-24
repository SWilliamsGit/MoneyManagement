#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
using namespace std;

    Checking::Checking(string aNum,int bal):Account(aNum,bal){
        // set checking fee to 0
        checkFee = 0;
    }

    void Checking::ApplyFee(double fee){
        checkFee = fee;
        // deduct fee from balance
        balance = balance - checkFee;
    }

    void Checking::ShowBalance(){
        // print checking account balance
        cout << "Checking Account Balance: $" << balance <<endl;
    }
