#pragma once
#include "configApp.h"
#include "AccountModel.h"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;


class ManageAccount
{
private:
	string path = FILE_ACCOUNT;
	vector<AccountModel> listAccount;

public:
	bool LoadData();
	bool SignUp(string last, string first, string mail, string password);
	bool SignIn(string user, string pass);
	void ForgotPassword();
	ManageAccount();
	~ManageAccount();
};
