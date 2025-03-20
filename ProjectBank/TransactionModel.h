#pragma once
#include <string>
#include <iostream>
using namespace std;

class TransactionModel
{
private:
	string TransactionID;
	string WalletID;
	string FromUserID;
	string ToUserID;
	int Point;
	string DateTrans;

public:
	TransactionModel();
	~TransactionModel();
};

