#pragma once
#include "PageSignIn.h"
#include "PageSignUp.h"

enum StatePage
{
	Page_SignIn = 0,
	Page_SignUp = 1
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
