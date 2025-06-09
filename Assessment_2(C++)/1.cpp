#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
int choice,balance=35000,deposit,withdraw;
int pin = 12345;
int password;
class Detail
{
    public : 
        Detail() 
        {
            cout << "\n The name of account holders are : KS";
            cout << "\n the account holders address is  : AHMEDABAD";
            cout << "\n The branch location is          : CG ROAD";
            cout << "\n Account number                  : 12345";
        }
};
void line ()
{
    string text;
    ifstream Myfile ("lin1.txt");
    while (getline (Myfile,text))
    {
        cout << text << endl;
    }
}
int main()
{
    time_t now;
    time (&now);
    cout << "\n ------------------------------------ WELCOME TO ATM ----------------------------------------"<<endl;
    cout << "\n                          -------------------------------------                         "<<endl;
    cout << "\n                         Current Date : "<< ctime(&now)                             ;
    cout << "\n                          -------------------------------------                         "<<endl;
    cout << endl;
    line ();
    cout << "\n         Press 1 and Than Press Enter to Access Your Account Via PIN Number";
    cout << "\n\n                                       or"; 
    cout << "\n\n         Press 0 and Press Enter to get Help."<<endl;
    cout << "\n enter the choice = ";
    cin >> choice;  
    switch (choice)
    {
        case 1 :
            cout << "\n -----------------------------------ATM Acount Access ---------------------------------------";
            cout << "\n\n Enter Your ACC Pin Access Number! [ONLY ONE ATTEMPT IS ACCEPTABLE]\n";
            cout << "\n --------------------------------------------------------------------------------------------"; 
            cout << "\n ";
            cin >> password;
                if(password != pin)
                {
                    cout << "\n -------------------------------------- THANK YOU -------------------------------------------";
                    cout << "\n failed to access!! No more attempt allowed!! Sorry!!";
                    line ();
                    cout << "\n Press any key to continue . . . ";
                } 
                else
                do { 
                {
                    cout << "\n --------------------------------- ATM Main Menu -------------------------------------";
                    cout << "\n Enter [1] To Deposite Cash";
                    cout << "\n Enter [2] To Withdraw Cash";
                    cout << "\n Enter [3] To Check Balance";
                    cout << "\n Enter [4] To Exit ATM";
                    cout << "\n Enter your choice as per requirements: ";
                    cin >> choice;
                    switch (choice)
                    {
                        case 1 :
                        cout << "\n ------------------------------ ATM ACCOUNT DEPOSIT SYSTEM ----------------------------------";
                        {
                            Detail d1;
                            cout << endl;
                            line ();
                            cout << "\n Present available balance : Rs. "<<balance;
                            cout << "\n Enter the Amount to be Deposited Rs. ";
                            cin >> deposit;
                            balance = balance + deposit;
                            cout << "\n Your new  balance is Rs. "<<balance;
                            cout << "\n Thank You!";
                            cout << "\n Press any key to Return to the main menu";
                            cin.ignore();
                            cin.get();
                        }
                        break;

                        case 2 :
                        cout << "\n --------------------------------- ATM ACCOUNT WITHDRAWAL -----------------------------------";
                        {
                            Detail d2;
                            cout << endl;
                            line ();
                            cout << "\n Enter the Amount to be Withdraw Rs. ";
                            cin >> withdraw;
                            if (withdraw > balance)
                            {
                                cout << "\n Insufficient Available Balance in your account.";
                            }
                            balance = balance - withdraw;
                            cout << "\n Press any key to continue . . . ";
                            cin.ignore();
                            cin.get();
                        }
                        break;

                        case 3 :
                        cout << "\n --------------------------------- BALANCE AVAILABLE -----------------------------------";
                        {
                            Detail d3;
                            cout << "\n Available Balance = "<<balance;
                        }
                        cout << "\n Press Enter to continue...";
                        cin.ignore();
                        cin.get();
                        break;

                        case 4 :
                        goto down;
                    }
                   
                } 
                    } while (choice != 4);     
        break;
        case 0 :
            cout << "\n --------------------------------- ATM ACCOUNT STATUS ---------------------------------------";
            cout << "\n      You must have the correct pin number to access this account.";
            cout<<  "\n                    Thanks for, your choice today!!"<<endl;
            line ();
            cout << "\n Press any key to continue . . . ";
        break;
    }
    down:
    return 0;
}