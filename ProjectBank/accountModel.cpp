#include "AccountModel.h"

int AccountModel::NextId = 0;

AccountModel::AccountModel()
{
	UserID = NextId++;
}

AccountModel::~AccountModel()
{
}

int AccountModel::getUserID()
{
	return UserID;
}

string AccountModel::getFirstName()
{
	return FirstName;
}

void AccountModel::setFirstName(string name)
{
	FirstName = name;
}

string AccountModel::getLastName()
{
	return LastName;
}

void AccountModel::setLastName(string last)
{
	LastName = last;
}

string AccountModel::getNumberPhone()
{
	return NumberPhone;
}

void AccountModel::setNumberPhone(string phone)
{
	NumberPhone = phone;
}

string AccountModel::getPassword()
{
	return Password;
}

void AccountModel::setPassword(string pass)
{
	Password = pass;
}

bool AccountModel::getIsActive()
{
	return IsActive;
}

void AccountModel::setIsActive(bool active)
{
	IsActive = active;
}

json AccountModel::toJson() {
	return {
		{"UserID", UserID},
		{"LastName", LastName},
		{"FirstName", FirstName},
		{"NumberPhone", NumberPhone},
		{"Password", Password},
		{"IsActive", IsActive}
	};
};

void AccountModel::fromJson(const json& j) {
	UserID = j.at("UserID").get<int>();
	LastName = j.at("LastName").get<string>();
	FirstName = j.at("FirstName").get<string>();
	NumberPhone = j.at("NumberPhone").get<string>();
	Password = j.at("Password").get<string>();
	IsActive = j.at("IsActive").get<bool>();
}