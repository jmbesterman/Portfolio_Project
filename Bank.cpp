//
// Created by jmbesterman on 4/3/22.
//

#include <iostream>
#include <string>
using namespace std;

#include "Bank.h"

Bank::Bank(){

}

Bank::Bank(string username, int password){

}

float Bank::Deposit(int value){
    float new_bal;
    new_bal=Bank_Person.get_balance()+value;
    //Parameter for get_balance() would be the users username
    return new_bal;
}
float Bank::Withdraw(int value){
    float new_bal;
    new_bal=Bank_Person.get_balance()+value;
    //Parameter for get_balance() would be the users username
    return new_bal;
}
float Bank::Balance(){
    return Bank_Person.get_balance();
}
float Bank::FBalance(int time){
    //Compounded monthly
    float P = Bank_Person.get_balance();
    float Calc_Bal = P(1+Irate/12)(12*time);
    cout << "Total amount accumulated over " << time << " years is: $" << Calc_Bal << endl;
    return Bank_Person.get_balance() + Calc_Bal;
}
float Bank::PayCalc(){
    //Needs a lot of code
}
