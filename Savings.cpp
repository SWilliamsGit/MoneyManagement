#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
using namespace std;

    Savings::Savings(string aNum,int bal): Account(aNum,bal){
        // set interest rate to 0
        interestRate = 0;
    }

    void Savings::ApplyInterest(double interest){
        interestRate = interest;
        // add interest to balance
        balance = balance + (balance*interestRate)/100;
    }

    void Savings::ShowBalance(){
        // print savings account balance
        cout << "Savings Account Balance: $" <<balance << endl;
    }
