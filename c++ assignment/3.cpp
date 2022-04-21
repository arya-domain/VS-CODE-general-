//21BCE10901
#include <iostream>
using namespace std;

class Account
{
    private:
        string name;
        int acc_no;
        char type;
        double balance;
        double interest;
        double min_bal;
        double penalty;
        double service_charge;
    public:
        void accept();
        void display();
        void deposit_interest();
        void withdraw();
        void check_min_bal();
        void check_service_charge();
};

class Curr_acct : public Account
{
    public:
        void accept();
        void deposit_interest();
        void withdraw();
        void check_min_bal();
        void check_service_charge();
};

class Sav_acct : public Account
{
    public:
        void accept();
        void deposit_interest();
        void withdraw();
        void check_min_bal();
        void check_service_charge();
};

void Account::accept()
{
    cout << "Enter the name of the customer : ";
    cin >> name;
    cout << "Enter the account number: ";
    cin >> acc_no;
    cout << "Enter the type of account (C/S): ";
    cin >> type;
    cout << "Enter the balance: ";
    cin >> balance;
    cout << "Enter the interest (%) : ";
    cin >> interest;
    cout << "Enter the minimum balance: ";
    cin >> min_bal;
    cout << "Enter the penalty: ";
    cin >> penalty;
    cout << "Enter the service charge: ";
    cin >> service_charge;
}

void Account::display()
{
    cout << "Name: " << name << endl;
    cout << "Account number: " << acc_no << endl;
    cout << "Type of account: " << type << endl;
    cout << "Balance: " << balance << endl;
    cout << "Interest: " << interest << endl;
    cout << "Minimum balance: " << min_bal << endl;
    cout << "Penalty: " << penalty << endl;
    cout << "Service charge: " << service_charge << endl;
}

void Account::deposit_interest()
{
    balance = balance + (balance * interest / 100);
    cout << "The new balance is: " << balance << endl;
}

void Account::withdraw()
{
    int amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;
    if (balance < amount)
    {
        cout << "Insufficient balance" << endl;
    }
    else
    {
        balance = balance - amount;

    }
    cout << "The new balance is: " << balance << endl;

}

void Account::check_min_bal()
{
    if (balance < min_bal)
    {
    
        cout << "Check Minimum Balance." << endl;
        balance = balance - penalty;
        cout << "The minimum balance is not maintained.Penalty is deducted from the account." << endl;
        cout << "The new balance is: " << balance << endl;
    }
}

void Account::check_service_charge()
{
    cout << "Thanks for using our service, service charges have been deducted from your account" << endl;
    balance = balance - service_charge;
    cout << "The new balance is: " << balance << endl;
}

int main()
{
    Account a;
    a.accept();

    cout << " " << endl;

    cout << "Account Details: " << endl;

    a.display();

    cout << " " << endl;
    cout << "Deposit Interest: " << endl;
    a.deposit_interest();

    cout << " " << endl;
    cout << "Withdraw: " << endl;
    a.withdraw();

    cout << " " << endl;
    a.check_min_bal();

    cout << " " << endl;
    cout << "Check Service Charge: " << endl;
    a.check_service_charge();
    
    return 0;
}