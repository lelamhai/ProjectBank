#pragma once
#include <string>
#include <iostream>
using namespace std;

class Account
{
private:
	string UserID;
	string FirstName;
	string LastName;
	string NumberPhone;
	string Password;

public:
	Account();
	~Account();
};