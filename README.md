# Portfolio_Project

Jeremy Besterman
Portfolio Project part 1 of 6
3/28/2022
Banking Application
Project Description:
For my project, I am going to be coding a banking application that is going to be similar to an atm machine, but will have a bit more calculations that it can do for you. I will be making different classes for this program that will include the bank class, person class, and possibly a separate class for filing. The Bank class will have the information on the different aspects of the atm transactions and other things that I will incorporate in that class. The Person class will have and retrieve all of the info on the person that is trying to access their account. Finally, the File class will use functions that will obtain the info for the person accessing the account inside the files of the machine.
Class File Names/Descriptions:
1.	Bank
Description: This class is the highest parent class of the project, which will then have the child class of Person. This class handles the initial tasks/instructions of banks such as deposits, withdraws, balance, payments, and growth calculations.
Data Members: float Irate (interest rate)
Methods:
•	This class will be a selection window that also has its own calculation function inside of it as well. It will have a while loop that has options of 1. Deposit, 2. Withdraw, 3. Balance, 4. Payment Calculations, and 5. Exit.
•	Deposit will lead to the deposit method after confirming whether the entered option is the one that the user wanted, also the entered value for deposit will also need to be confirmed.
  o	float deposit(int value) #Takes in an integer value and returns a float value, which will be the balance of the account after the deposit.
  o	Balance = Balance + deposit
•	Withdraw will lead to the withdraw method after confirming whether the entered option is the one that the user wanted, also the entered value for withdraw will also need to be confirmed.
  o	float withdraw(int value) #Takes an integer value and returns a float value, which will be the balance of the account after the withdraw.
  o	Balance = Balance – withdraw
•	Balance will be another selection of options, which consists of 1. Account Total Balance, 2. Future Balance, and 3. Exit.
  o	Account Total Balance just does the basic of showing the user their balance within the account
    	float Balance() #Looks to the Person Class’s getbalance() method in order to get that number and will return the float value, which takes in no parameters.
  o	Future Balance option will show the user what their future balance will be based on the current balance that they have using the interest rate of the bank and also the time that the user will input.
    	float FBalance(int time) #Looks to the Person Class’s getbalance() method again, but using the interest rate of the bank, will calculate the future balance of the account with the current balance and the amount of time entered for the parameter.
  o	Exit option is selected, which will shoot back to the original option set.
•	Payment Calculations will be used to help the user calculate their monthly payment totals so that they can regulate how much to spend/not to spend.
  o	float PayCalc() #Takes in no parameters, will use a while loop to take in a string for the name of the thing that is being paid for, and an integer for the amount paid for that item. The names will be thrown into one array and the amount will be thrown into another array, which will either be displayed side by side for the user after entering and for future reference in files.
  o	Payment calculations will also then add up the amounts entered and show the amount that is needed to be paid for that month.

2.	Person
Description: This class is the child class of the Bank class and will be the parent class of the File class. This class handles the data of the user that is accessing the application, whether it is for the first time or if accessed before. This class will ask for the persons username and a 4-digit password if they have accessed this application before, if not it will allow the user to create it.
Data Members: string username, int password, float balance, 
Methods:
•	String getusername() #returns the username of the user who is accessing the account as a string.
•	Void setusername(string name) #Takes in a name to be used for the username login and sets it for the account.
•	Int getpassword() #returns the user’s password for the account that is being accessed as an integer value.
•	Void setpassword(int number) #Takes in a number to be used for the password to get into the account.
•	float getbalance() #Takes no parameters and retrieves the balance of the user who is accessing the application.
•	Void setbalance(float value) #Takes in a value after adjusting the amount in the account (deposit/withdraw) and sets the new balance of the account.
•	(Not sure what the data type should be) getpayments(int month, int year) #Takes in a year and a date to be used in the File class to be used to find the payments made during that month and year entered.
•	Void setpayments(int month, int year, Array A, Array B) #Takes in a month and year date to be used to keep track of when the payments are made and is taken into the File class to input said files into the system. Also takes in the two arrays that is made in the Bank class.

3.	File
Description: This class is the child of the Person class and is the last child class of the banking application. This class handles the accessing of the files within the machine that contains the application. When given the username and password entered in the machine, it will find the file that matches that information, and get the data from within it.
Data Members: None
Methods:
•	Void CreateAcc(string username)(Creates Account) #Takes in the username as the file name and then starts writing the files within the user’s account, including adding the password of the user.
•	Void OpenAcc(string username, int password) #Takes in the username and password of the user and reads the file and sees if the password matches the password entered by the user.
  o	If the password matches, opens and starts appending the file with what ever options are used in the Bank class.
  o	If not, it lets the user know that the password is wrong.
  o	If the username is something that doesn’t match any of the file names, it will let the user know that it doesn’t match any of the files.

