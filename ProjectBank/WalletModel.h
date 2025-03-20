#pragma once
#include <string>
#include <iostream>
using namespace std;

class WalletModel
{
private:
	string WalletID;
	string UserID;
	int Point;
	string Content;

public:
	WalletModel();
	~WalletModel();
};