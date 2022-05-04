//Jeremy Besterman
//CSCE 306, Spring 2022
//Portfolio Project

//Code Summary: .cpp file for Person class, defines all the methods from .h file.

//Changelog: All getters and setters have been changed in order to incorporate the file reading and writing aspect of
//project, this was not looked at correctly during the creation of pseudocode.

#include <iostream>
#include <string>
#include <fstream>
#include "Person.h"
using namespace std;

Person::Person(){}

Person::Person(string username, int password){ //Used to create an account
    set_username(username);
    set_password(password);
    set_balance(0);
}
float Person::get_balance(){
    /*
    string text = ".txt";
    string file_name = username + text;
    ifstream file;
    file.open(file_name);
    file >> balance;
    file.close();
    */
    return this->balance;
}
void Person::set_balance(float bal){
    //string text = ".txt";
    //string file_name = username + text;
    //fstream file;
    //file.open(file_name);
    this->balance = bal;
    //file << balance;
    //file.close();
}
string Person::get_username(){
    /*
    string text = ".txt";
    string file_name = username + text;
    ifstream file;
    file.open(file_name);
    file >> username;
    file.close();
    */
    return this->username;
}
void Person::set_username(string name){
    //string text = ".txt";
    //string file_name = username + text;
    //fstream file;
    //file.open(file_name);
    this->username = username;
    //file << balance;
    //file.close();
}
int Person::get_password(){
    /*
    string text = ".txt";
    string file_name = username + text;
    ifstream file;
    file.open(file_name);
    file >> password;
    file.close();
    */
    return this->password;
}
void Person::set_password(int pass){
    //string text = ".txt";
    //string file_name = username + text;
    //fstream file;
    //file.open(file_name);
    this->password = pass;
    //file << balance;
    //file.close();
}
//get_payments(int month, int year){ //Fix parameters
    //return; //Needs to return an array
//}
//void Person::set_payments(int month, int year, char names[], int prices[]){

//}
