/*
    Banking System By Abraham Zayed
    
    btw I'm very aware that my code contains mistake and cant be compiled atm. but, one of the reasons that i posted it was so that someone could point 
    out to me the mistakes in the code, I think my main problem is when to call functions, and saving new users into an array with their respective pass-codes
*/



#include <iostream>
#include <fstream>
#include <cctype>
#include <string.h>

using namespace std;


class Accounts
{
    int users_count;
    int user_password;
    string user_name;
    int account_value;


public:
    void create_account();
    void deposit();
    void withdraw();
    void delete_account();
    void balance_enquiry();
    void verify_user();
}


void Accounts::create_account(string user_name; int money; int age;)
{
    std::cin >> user_name; "Enter User Name";
    do
    {
        std::cout << "Age Must Be Above or equal to 18" << endl;
    } while (age <= 18)

    if (age >= 18)
    {
        for (int n = 0; n < Users_count; i++)
        {
            new user_name[n] = users[n];
        }
    }
}

void Accounts::deposit(string name; int deposit_amount;)
{
    std::cin >> name; "Enter Name: " << endl;
    for (int i = 0; i < users_count; i++)
    {
        if (name == user_name[i])
        {
            std::cin >> deposit_amount; "How Much Would You Like To Deposit?" << endl;
            if (deposit_amount < 1 || deposit_amount > 10000)
            {
                std::cout << "Deposit Amount Must Be between 1$ and 10000$";
            }
            else
            {
                std::cin >> deposit_amount; "Deposit Amount: ";
                user_value += deposit_amount;
            }
        }
        else
        {
            std::cout << "Your name is not registered in this bank, create an account first" << endl;
        }
    }
}

void Accounts::withdraw(string name; int withdraw_amount;)
{
    std::cin >> name; "Enter Name: " << endl;
    for (int i = 0; i < users_count; i++)
    {
        if (name == user_name[i])
        {
            std::cin >> withdraw_amount; "How Much Would You Like To Withdraw?" << endl;
            if (withdraw_amount > user_name[i].value)
            {
                std::cout << "Your Withdrawal Is More Than Your Balance" << endl;
            }
            else
            {
                user_name[i].value -= withdraw_amount;
                std::cout << "Here's Your Money: " << withdraw_amount << endl;
            }
        }
        else
        {
            std::cout << "Your name is not registered in this bank, create an account first" << endl;
        }
    }
}

void Accounts::delete_account(string name; int password; bool confirmation)
{
    for (int i = 0; i < users_count; i++)
    {
        if name = user_name[i];
        {
            delete(user_name[i]);
        }
        std::cout << "User Has Been Deleted" << endl;
    }
}

void Accounts::balance_enquiry(string name;)
{
    for (int i = 0; i < users_count; i++)
    {
        if (name == user_name[i])
        {
            std::cin << password; "Enter Your Password" << endl;
            if (password == user_name[i].password)
            {
                std::cout << "Your Balance Is " << user_name[i].value << endl;
            }
            else
            {
                std::cout << "The Password You Entered Is Incorrect" << endl;
            }
        }
        else
        {
            std::cout << "Your name is not registered in this bank, create an account first" << endl;
        }
    }
}

void Accounts::verify_user(string name; int password;)
{
    do
    {
        std::cin >> user_name; "Enter Your Username: " << endl;
        std::cin >> password; "Your Password: ";

    } while ((strcmp(user_name) != string) || (password != int));

    for (int i = 0; i < user_count; i++)
    {
        if ((user_name != user_name[i]) && (password != user_password[i]))
        {
            std::cout << "User name does not exist or password is incorrect" << endl;
        }
        else
        {
            std::cout << "Welcome to " << bank_name << " " << username << endl;
        }
    }
}

class Bank
{
    string bank_name;
    long loan_limit;
    int user_count_limit;
    class Accounts();
public:
    void login();
}

void Bank::login(string user_name; int password;)
{
    std::cin >> user_name; "Enter Username: " << endl;
    std::cin >> user_password; "Password: " << endl;

    for (int i = 0; i < user_count_limit; i++)
    {
        if ((user_name == user_name[i]) && (user_password == user_password[i]))
        {
            std::cout << "Welcome " << user_name << endl;
        }
        else
        {
            std::cout << "User name or password is incorrect";
        }
    }
}

void Bank::loan_application(string name; string reason_for_loan; int loan_amount; int monthly_income; int debt;)
{
    std::cin >> name; "What's Your Name? " << endl;
    name_ptr = *user_name[n];

    std::cin >> reason_for_loan; "What's Your Reason For Applying For This Loan" << endl;

    if ((loan_amount > monthly_income * 24) && (debt < monthly_income * 12) && (10 * loan_amount < money_limit))
    {
        std::cout << "Your Loan Has Been Approved";
        user_value += loan_amount;
    }
    else
    {
        std::cout << "To Apply For A Loan; The Following Requirments must be meet" << endl << "1) Your loan amount must be less then monthly income times 24" << endl;
    }
}

void Bank::Bank_Setup(int users_num_limit; int user_money_limit; int debt_limit; string bank_name;)
{
    do
    {
        std::cin >> bank_name; "What Would You Like To Name Your Bank";
    } while (strlen(bank_name) < 2);

    if (strlen(bank_name) >= 2)
    {
        bank_name = bank_name;
    }

    do
    {
        std::cin >> users_num_limit; "How Many Users would you like?" << endl;
    } while ((users_num_limit != int) && (users_num_limit > 1) && (users_num_limit < 7000000000))

    do
    {
        std::cin >> user_money_limit; "What Is The Limit Of A User's Value?" << endl;
    } while (user_money_limit < 1);
}

int main()
{
    Bank_Setup();
    std::cin >> user_name; "User Name: ";
    std::cin >> user_password; "Password: ";
    verify_user(user_name, user_password);

    std::cout << "Welcome To The Bank Of " << bank_name, << endl;
    std::cout << "To create a new account type 1 " << endl "To delete a new account type 2" << endl << "For A Balance Enquiry type 3" << endl << "For a Deposit type 4" << endl << "For a withdrawl type 5" << endl << "For A Bank Loan type 6" << endl;
    std::cin << user_request; "Number: ";

    if (user_request == 1)
    {
        std::cin >> user_name; "Enter User Name: " << endl;
        std::cin >> user_password; "Enter Password: " << endl;
        std::cin >> deposit_amount; "Inital Deposit: " << endl;
        create_account(user_name, user_password, deposit_amount);
    }
    else if (user_request == 2)
    {
        std::cin >> user_name; "Enter User Name: " << endl;
        std::cin >> user_password; "Enter Password: " << endl;
        std::cin >> confirmation; "Are you sure you would like to delete your account?";
        delete_account(user_name, user_password, confirmation);
    }
    else if (user_request == 3)
    {
        balance_enquiry(user_name, user_password);
    }
    else if (user_request == 4)
    {
        std::cin >> deposit_amount; "Deposit Amount: " << endl;
        deposit(user_name, user_password);
    }
    else if (user_request == 5)
    {

        std::cin >> withdrawl; "Withdrawl amount: " << endl;
        withdrawl(withdraw_amount);
    }
    else if (user_request == 6)
    {
        bank_loan();
    }
    else
    {
        return 1;
    }
}
