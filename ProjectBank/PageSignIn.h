#pragma once
#include <vector>
#include "BasePage.h"
#include "Singleton.h"

class PageSignIn:public BasePage
{
private:
	enum StateInputLogin
	{
		USERNAME	= 0,
		PASSWORD	= 1,
		ENTER		= 2,

		EXIT = -1
	};
	StateInputLogin currentPageLogin;


	vector<Text> listText;
	vector<InputField> listInput;
	Text txtMessage;
	
public:
	void main() override;
	void setUI();
	void handle();
	PageSignIn();
	~PageSignIn();
};