#pragma once
#include <string>
#include <iostream>
using namespace std;

class Transaction
{
private:
	string WalletID;
	string FromUserID;
	string ToUserID;
	int Point;
	string DateTrans;

public:
	Transaction();
	~Transaction();
};

