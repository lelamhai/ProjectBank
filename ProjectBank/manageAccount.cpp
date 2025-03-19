#include "ManageAccount.h"

ManageAccount::ManageAccount()
{
}

ManageAccount::~ManageAccount()
{
}

void ManageAccount::LoadData()
{

}

void ManageAccount::SignUp()
{
    string path = FILE_ACCOUNT;

    ofstream file(path);
    if (file.is_open()) {
        file << "a";
        file << "b";
        file.close();
        std::cout << "OK";
    }
    else {
        std::cout << "Not save data\n";
    }
}

void ManageAccount::SignIn()
{

}

void ManageAccount::ForgotPassword()
{

}