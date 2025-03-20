#pragma once
#include "json.hpp"
#include <string>
#include <iostream>
using namespace std;
using json = nlohmann::json;

class AccountModel
{
private:
	static int NextId;
	int UserID;
	string LastName;
	string FirstName;
	string NumberPhone;
	string Password;

public:
	int getUserID();
	string getFirstName();
	void setFirstName(string name);
	string getLastName();
	void setLastName(string last);
	string getNumberPhone();
	void setNumberPhone(string phone);
	string getPassword();
	void setPassword(string pass);

	json toJson();
	void fromJson(const json& j);
	AccountModel();
	~AccountModel();
};