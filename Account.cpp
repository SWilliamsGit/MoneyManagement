#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"
using namespace std;

Account::Account(string num,int bal){
    // set variables equal to each other
    accountNum = num;
    balance = bal;
}

void Account::Withdraw(int amt){
    // equation to withdraw
    balance -= amt;
}

void Account::Deposit(int amt){
    // equation to deposit
    balance += amt;
}
