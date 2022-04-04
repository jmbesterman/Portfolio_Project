//
// Created by jmbesterman on 4/3/22.
//

#ifndef PORTFOLIO_PROJECT_BANK_H
#define PORTFOLIO_PROJECT_BANK_H
#include <iostream>
#include <string>

class Bank : public Person {
public:
    Bank(); //Takes no parameters and will ask to create account with username and password
    Bank(string, int); //Takes in username,password for account
    float Deposit(int);
    float Withdraw(int);
    float Balance();
    float FBalance(int time);
    float PayCalc();
private:
    float Irate = 0.0001;
};


#endif //PORTFOLIO_PROJECT_BANK_H
