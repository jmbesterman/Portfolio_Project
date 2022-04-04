//
// Created by jmbesterman on 4/3/22.
//

#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

Person::Person(){

}

Person::Person(string username, int password){

}

float Person::get_balance(){
    return this->balance;
}
void Person::set_balance(float bal){
    this->balance = bal;
}
string Person::get_username(){
    return this->username;
}
void Person::set_username(string name){
    this->username = username;
}
int Person::get_password(){
    return this->password;
}
void Person::set_password(int pass){
    this->password = pass;
}
get_payments(int month, int year){ //Fix parameters
    return; //Needs to return an array
}
void Person::set_payments(int month, int year, char names[], int prices[]){

}
