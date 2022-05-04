//Jeremy Besterman
//CSCE 306, Spring 2022
//Portfolio Project

//Code Summary: Main driver file for the program. Uses Person and Bank classes.

//Changelog: Incorporated the file class to be used in here, due to lack in need of using the methods elsewhere. Also,
//file manipulation is used in many other parts of the program as well.

#include <iostream>
#include <fstream>
#include <string>
#include "Bank.h"
#include "Person.h"
using namespace std;

void print_menu();
void print_bal_menu();
int take_input();
int take_bal_input();
void Create_Account(string, int);
void Open_Account(string);

int main() {
    cout << "Welcome to your @Home Banking App!" <<endl;
    cout << "Do you already have an account saved? (y/n)" << endl;
    char answer;
    cin >> answer;
    string username;
    int password;
    if(answer == 'y'){
        cout << "Please enter your username to access your account:";
        //string username;
        cin >> username;
        Open_Account(username);
        //Create a check to see if open_account
        cout << "Please enter password to login to your account:";
        cin >> password;
        //Create a checker to see if password matches the one in file
    }
    if(answer == 'n'){
        cout << "Please enter a username you would like to use to login to your account:";
        //string username;
        cin >> username;
        cout << "Please enter a password that will go along with the username that was entered." << endl;
        cout << "(This password must be a 4-digit code that you can remember)" << endl;
        //int password;
        cout << "password:";
        cin >> password;
    }
    int user_request = -1;
    while(user_request != 5){
        print_menu();
        user_request=take_input();
    }
    cout << "Thank you for using the @Home Banking Application!" << endl;
    return 0;
}

void print_menu(){
    cout << "1. Deposit" <<endl;
    cout << "2. Withdraw" <<endl;
    cout << "3. Balance" <<endl;
    cout << "4. Payment Calculations" <<endl;
    cout << "5. Exit" <<endl;
}
void print_bal_menu(){
    cout << "1. Balance" << endl;
    cout << "2. Future Balance" << endl;
    cout << "3. Exit" << endl;
}
int take_input(){
    cout << "Please select an option." << endl;
    int user_option;
    if(user_option == 1){
        cout << "Please enter an amount you would like to deposit to your account:";
        float amount;
        cin >> amount;
        Deposit(amount);
    }
    else if(user_option == 2){
        cout << "Please enter an amount you would like to withdraw from your account:";
        float amount;
        cin >> amount;
        Withdraw(amount);
    }
    else if(user_option == 3){
        int bal_request = -1;
        while(bal_request != 3){
            print_bal_menu();
            bal_request = take_bal_input();
        }
    }
    else if(user_option == 4){
        PayCalc();
    }
    else if(user_option < 1 or user_option > 5){
        cout << "Invalid option, please try again." << endl;
        print_menu();
        take_input();
    }
    return user_option;
}
int take_bal_input(){
    cout << "Please select an option." << endl;
    int user_option;
    if(user_option == 1){
        Balance();
    }
    else if(user_option == 2){
        cout << "Please enter the amount of years you would like to calculate your future balance over:";
        int years;
        cin >> years;
        cout << "Calculating future balance using amount entered with an interest rate of 0.01%" << endl;
        FBalance(years);
    }
    else if(user_option < 1 or user_option > 3){
        cout << "Invalid option, please try again." << endl;
        print_bal_menu();
        take_bal_input();
    }
}
void Create_Account(string username, int password){
    string text = ".txt";
    string file_name = username + text;
    ofstream file;
    file.open(file_name);
    Bank(username,password);
    file.close();
}
void Open_Account(string username){ //Fix this method,continue it
    string text = ".txt";
    string file_name = username + text;
    ifstream file;
    file.open(file_name);
}