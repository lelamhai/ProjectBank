#include "ManageAccount.h"

ManageAccount::ManageAccount()
{
    LoadData();
}

ManageAccount::~ManageAccount()
{
}

bool ManageAccount::LoadData()
{
    ifstream file(path);
    if (file.is_open()) {
        json j;
        file >> j;
        file.close();
        json jsonAccount = json::array();
        jsonAccount = j["Data"];

        for (int i = 0; i < jsonAccount.size(); i++)
        {
            AccountModel model;
            model.fromJson(jsonAccount[i]);
            listAccount.push_back(model);
        }

        return true;
    }
    else {
        return true;
    }
}

int ManageAccount::SignUp(string last, string first, string phone, string pass)
{
    AccountModel model;
    model.setLastName(last);
    model.setFirstName(first);
    model.setNumberPhone(phone);
    model.setPassword(pass);
    listAccount.push_back(model);
    if (SaveFile())
    {
        return model.getUserID();
    }
    return -1;
}

int ManageAccount::SignIn(string user, string pass)
{
    for (int i = 0; i < listAccount.size(); i++)
    {
        if (listAccount[i].getNumberPhone() == user && listAccount[i].getPassword() == pass)
        {
            return listAccount[i].getUserID();
        }
    }
    return -1;
}

bool ManageAccount::ForgotPassword(int id, string newPass)
{
    for (int i = 0; i < listAccount.size(); i++)
    {
        if(listAccount[i].getUserID() == id)
        {
            listAccount[i].setPassword(newPass);
            SaveFile();
            return true;
        }
    }
    return false;
}

bool ManageAccount::SaveFile()
{
    json jsonAccount = json::array();
    for (int i = 0; i < listAccount.size(); i++)
    {
        jsonAccount.push_back(listAccount[i].toJson());
    }
    json j;
    j["Data"] = jsonAccount;

    ofstream file(path);
    if (file.is_open()) {
        file << j.dump(4) << endl;// 4 space
        file.close();
        return true;
    }
    else {
        return false;
    }
}