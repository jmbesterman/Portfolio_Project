//Jeremy Besterman
//CSCE 306, Spring 2022
//Portfolio Project

//Code Summary: .h file for Person class, inherited by the Bank class.

//Changelog: Added in a constructor that takes in a username and password that is entered by user, so that the info can
//be stored on login.

#ifndef PORTFOLIO_PROJECT_PERSON_H
#define PORTFOLIO_PROJECT_PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(string, int);
    float get_balance();
    void set_balance(float);
    string get_username();
    void set_username(string);
    int get_password();
    void set_password(int);
    get_payments(int, int);//Fix data type, takes in the month, year of payments
    void set_payments(int, int, char, int); //Fix data type, takes in month, year, array of names of payments
    //and an array of totals for those names
private:
    string username;
    int password;
    float balance;
    //char name_array[];
    //int price_array[];
};


#endif //PORTFOLIO_PROJECT_PERSON_H
