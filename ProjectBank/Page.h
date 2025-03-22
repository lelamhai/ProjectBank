#pragma once
#include "PageSignIn.h"
#include "PageSignUp.h"
#include "PageCustomer.h"
#include "PageAdmin.h"
#include "PageWalletTransfer.h"
#include "PageForgotPassword.h"

enum StatePage
{
	Page_SignIn			= 0,
	Page_SignUp			= 1,
	Page_Customer		= 2,
	Page_Admin			= 3,
	Page_WelletTranfer	= 4,
	Page_ForgotPassword = 5
};

class Page
{
public:
	StatePage currentPage;
	void setRunPage(StatePage page);
	void main();
	Page();
	~Page();
};
