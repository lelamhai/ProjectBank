#pragma once
#include "PageSignIn.h"
#include "PageSignUp.h"
#include "PageCustomer.h"
#include "PageStaff.h"

enum StatePage
{
	Page_SignIn		= 0,
	Page_SignUp		= 1,
	Page_Customer	= 2,
	Page_Staff		= 3
};

class Page
{
private:
	StatePage currentPage;

public:
	void setRunPage(StatePage page);
	void main();
	Page();
	~Page();
};
