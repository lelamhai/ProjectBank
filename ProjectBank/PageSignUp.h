#pragma once
#include <vector>
#include "BasePage.h"
#include "ManageAccount.h"

class PageSignUp:public BasePage
{
private:
	enum StateInputSignUp
	{
		LASTNAME	= 0,
		FIRSTNAME	= 1,
		NUMBERPHONE	= 2,
		PASSWORD	= 3,
		ENTER		= 4,

		EXIT		= -1
	};
	StateInputSignUp currentPageSignUp;

	vector<Text> listText;
	vector<InputField> listInput;
	Text txtMessage;
	ManageAccount a;


public:
	void main() override;
	void setUI();
	void handle();
	PageSignUp();
	~PageSignUp();
};