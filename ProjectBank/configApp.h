#pragma once
#include "mydraw.h"
#include "mycolor.h"
#include "mywindows.h"
#include "mykeyboard.h"

// Input
#define LENGTH_MIN 1
#define LENGTH_CODE 7
#define WIDTH_INPUT 20
#define HEIGHT_INPUT 2
#define LENGTH_INPUT 15

// Path
const string FILE_ACCOUNT = "Account.txt";
const string FILE_WALLET = "Wallet.txt";
const string FILE_TRANSACTION = "Transaction.txt";

void init();
string truncateText(const string& text);