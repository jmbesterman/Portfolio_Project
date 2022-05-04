//Jeremy Besterman
//CSCE 306, Spring 2022
//Portfolio Project

//Code Summary: .h file for Bank class, inherits the Person .h as well.

//Changelog: Changed both parameters of deposit and withdraw method to take in a float rather than an integer, as
//discussed in part 1 of the project. Added private members pass and user to hold on to login info, as banks will do
//for people. Added a new constructor that allows the login to be saved.

#ifndef PORTFOLIO_PROJECT_BANK_H
#define PORTFOLIO_PROJECT_BANK_H
#include <iostream>
#include <string>
#include "Person.h"

class Bank : public Person{//, public basic_string<char> {
public:
    Bank(); //Takes no parameters and will ask to create account with username and password
    Bank(string, int); //Takes in username,password for account
    float Deposit(float);
    float Withdraw(float);
    float Balance();
    float FBalance(int time);
    float PayCalc();
private:
    float Irate = 0.0001;
    string user; //Added to hold the users username
    int pass;
};


#endif //PORTFOLIO_PROJECT_BANK_H
