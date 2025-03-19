#pragma once
#include <string>
#include <iostream>
using namespace std;

class Wallet
{
private:
	string UserID;
	string WalletID;
	int Point;
	string Content;

public:
	Wallet();
	~Wallet();
};