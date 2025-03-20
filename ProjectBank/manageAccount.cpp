#include "ManageAccount.h"

ManageAccount::ManageAccount()
{
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
        AccountModel model;
        model.fromJson(j);
        listAccount.push_back(model);

        return true;
    }
    else {
        return true;
    }
}

bool ManageAccount::SignUp(string last, string first, string phone, string pass)
{
    AccountModel model;
    model.setLastName(last);
    model.setFirstName(first);
    model.setNumberPhone(phone);
    model.setPassword(pass);
    listAccount.push_back(model);
    gotoXY(0,0);
    cout << listAccount.size();
    json jsonAccount = json::array();//model.toJson();

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

bool ManageAccount::SignIn(string user, string pass)
{

    return true;
}

void ManageAccount::ForgotPassword()
{

}