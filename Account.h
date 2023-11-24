#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>

using namespace std;

class Account{
    public:
        string accountNum;              // store account number
        int balance;                    // store balances
        Account(string aNum,int bal);   // constructor
        void Withdraw(int amt);         // function to withdraw
        void Deposit(int amt);          // function to deposit
};

#endif // ACCOUNT_H
