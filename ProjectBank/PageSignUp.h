#pragma once
#include <vector>
#include "BasePage.h"
#include "ManageAccount.h"

class PageSignUp:public BasePage
{
private:
	enum StateInputSignUp
	{
		FULLNAME	= 0,
		TELLPHONE	= 1,
		MAIL		= 2,
		PASSWORD	= 3,
		ENTER		= 4,

		EXIT = -1
	};
	StateInputSignUp currentPageSignUp;

	vector<Text> listText;
	vector<InputField> listInput;
	Text txtMessage;

public:
	void main() override;
	void setUI();
	void handle();
	PageSignUp();
	~PageSignUp();
};