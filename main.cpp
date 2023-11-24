#include <iostream>
#include "Account.h"
#include "Savings.h"
#include "Checking.h"

using namespace std;

int main(){

    // create objects
    Savings sav("123",500);
    Checking check("321",500);

    // print initial balances
    cout <<"Initial Balances: " <<endl;
    check.ShowBalance();
    sav.ShowBalance();

    cout << endl;

    // Show transactions
    cout << "Transactions: " << endl;
    cout <<"Withdraw $250 from Checking Account" <<endl;
    check.Withdraw(250);
    cout <<"Deposit $100 from Savings Account" <<endl;
    sav.Deposit(100);
    cout <<"Apply $5 fee to Checking Account" <<endl;
    check.ApplyFee(5);
    cout <<"Apply 2% interest to Savings Account" <<endl << endl;
    sav.ApplyInterest(2);

    // print final balances
    cout << "Final Balances: " <<endl;
    check.ShowBalance();
    sav.ShowBalance();
}
