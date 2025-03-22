#pragma once
#include "BasePage.h"
#include "ManageAccount.h"
#include <vector>

class PageForgotPassword:public BasePage
{
private:
	enum StateInputFP
	{
		USERNAME = 0,
		PASSWORD = 1,
		ENTER = 2,

		EXIT = -1
	};
	StateInputFP currentFP;

	vector<Text> listText;
	vector<InputField> listInput;
	Text txtMessage;
	ManageAccount a;

public:
	void main() override;
	void setUI();
	void handle();
	PageForgotPassword();
	~PageForgotPassword();
};
