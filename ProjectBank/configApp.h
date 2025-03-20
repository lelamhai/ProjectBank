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

// File
const string FILE_ACCOUNT = "DataAccount.json";
const string FILE_WALLET = "DataWallet.json";
const string FILE_TRANSACTION = "DataTransaction.json";

// Admin
const string USER_ADMIN = "admin";
const string PASSWORD_ADMIN = "admin";

void init();
string truncateText(const string& text);