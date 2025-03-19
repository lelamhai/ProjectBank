#pragma once
#include "configApp.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

class ManageAccount
{
private:


public:
	void LoadData();
	void SignUp();
	void SignIn();
	void ForgotPassword();
	ManageAccount();
	~ManageAccount();
};
