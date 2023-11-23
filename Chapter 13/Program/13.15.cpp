#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"
using namespace std;

// Function prototypes
void displayMenu();
void makeDeposit(Account&);
void withdraw(Account&);

int main()
{
    Account savings; // Savings account object
    char choice; // Menu selection

    // Set numeric output formatting.
    cout << fixed << showpoint << setprecision(2);

    do
    {
        // Display the menu and get a valid selection.
        displayMenu();
        cin >> choice;
        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range of A through G: ";
            cin >> choice;
        }

        // Process the user's menu selection.
        switch (choice)
        {
        case 'a':
        case 'A':
            cout << "The current balance is $" << savings.getBalance() << endl;
            break;
        case 'b':
        case 'B':
            cout << "There have been " << savings.getTransactions() << " transactions.\n";
            break;
        case 'c':
        case 'C':
            cout << "Interest earned for this period: $" << savings.getInterest() << endl;
            break;
        case 'd':
        case 'D':
            makeDeposit(savings);
            break;
        case 'e':
        case 'E':
            withdraw(savings);
            break;
        case 'f':
        case 'F':
            savings.calcInterest();
            cout << "Interest added.\n";
            break;
        }
    } while (toupper(choice) != 'G');

    return 0;
}

void displayMenu()
{
    cout << "\n MENU\n";
    cout << "-----------------------------------------\n";
    cout << "A) Display the account balance\n";
    cout << "B) Display the number of transactions\n";
    cout << "C) Display interest earned for this period\n";
    cout << "D) Make a deposit\n";
    cout << "E) Make a withdrawal\n";
    cout << "F) Add interest for this period\n";
    cout << "G) Exit the program\n\n";
    cout << "Enter your choice: ";
}

void makeDeposit(Account& account)
{
    double amount;

    cout << "Enter the amount of the deposit: ";
    cin >> amount;
    cin.ignore();
    account.deposit(amount);
}

void withdraw(Account& account)
{
    double amount;

    cout << "Enter the amount of the withdrawal: ";
    cin >> amount;
    cin.ignore();
    if (!account.withdraw(amount))
        cout << "ERROR: Withdrawal amount too large.\n\n";
}