#pragma once
#include "configApp.h"
#include "AccountModel.h"
#include "json.hpp"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
using json = nlohmann::json;

class ManageAccount
{
private:
	string path = FILE_ACCOUNT;
	vector<AccountModel> listAccount;

public:
	bool LoadData();
	int SignUp(string last, string first, string mail, string password);
	int SignIn(string user, string pass);
	bool ForgotPassword(int id, string newPass);
	bool SaveFile();
	ManageAccount();
	~ManageAccount();
};
