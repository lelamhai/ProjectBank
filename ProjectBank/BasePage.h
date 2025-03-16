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
	Text txtTitle;
public:
	void setTitle(string title);
	virtual void main();
	void draw();
	BasePage();
	~BasePage();
};
