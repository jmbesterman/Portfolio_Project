//Jeremy Besterman
//CSCE 306, Spring 2022
//Portfolio Project

//Code Summary: .cpp file for Bank class, inherits the Person .h as well, also defines all methods from .h file.

//Changelog:

#include <iostream>
#include <string>
using namespace std;

#include "Bank.h"

Bank::Bank(){}

Bank::Bank(string username, int password){ //Used to create an account
    Person(username, password);
    pass = password;
    user = username;
}

float Bank::Deposit(float value){
    Bank Bank_Person(user,pass);
    float new_bal;
    new_bal=Bank_Person.get_balance()+value;
    //Parameter for get_balance() would be the users username
    Bank_Person.set_balance(new_bal);
    return new_bal;
}
float Bank::Withdraw(float value){
    Bank Bank_Person(user,pass);
    float new_bal;
    new_bal=Bank_Person.get_balance()+value;
    //Parameter for get_balance() would be the users username
    Bank_Person.set_balance(new_bal);
    return new_bal;
}
float Bank::Balance(){
    Bank Bank_Person(user,pass);
    return Bank_Person.get_balance();
}
float Bank::FBalance(int time){
    Bank Bank_Person(user,pass);
    //Compounded monthly
    float P = Bank_Person.get_balance();
    float Calc_Bal = P(1+Irate/12)(12*time);
    cout << "Total amount accumulated over " << time << " years is: $" << Calc_Bal << endl;
    return Bank_Person.get_balance() + Calc_Bal;
}
float Bank::PayCalc(){
    //Needs a lot of code
}
