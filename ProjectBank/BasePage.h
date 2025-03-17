#pragma once
#include "mycolor.h"
#include "mydraw.h"
#include "mykeyboard.h"
#include "mywindows.h"

#include "Text.h"
#include "InputField.h"
#include <string.h>
#include <iostream>
using namespace std;

class BasePage
{
private:
	string title = "TIEU DE";
	string name = "Hi Ten!";
	Text txtTitle;

public:
	Text txtSayHi;
	void setTitle(string title);
	void setSayHi(string name);
	virtual void main();
	void draw();
	BasePage();
	~BasePage();
};
