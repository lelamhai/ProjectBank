#include "Page.h"
Page::Page()
{
}

Page::~Page()
{
}

void Page::setRunPage(StatePage page)
{
	currentPage = page;
}
void Page::main()
{
	PageSignIn* i;
	PageSignUp* u;
	PageCustomer* c;
	PageAdmin* a;
	PageWalletTransfer* f;
	while (true)
	{
		switch (currentPage)
		{
		case Page_SignIn:
			showCur(0);
			i = new PageSignIn();
			i->main();
			delete i;
			break;

		case Page_SignUp:
			showCur(0);
			u = new PageSignUp();
			u->main();
			delete u;
			break;

		case Page_Customer:
			showCur(0);
			c = new PageCustomer();
			c->main();
			delete c;
			break;

		case Page_Admin:
			showCur(0);
			a = new PageAdmin();
			a->main();
			delete a;
			break;

		case Page_WelletTranfer:
			showCur(0);
			f = new PageWalletTransfer();
			f->main();
			delete f;
			break;

		/*default:
			break;*/
		}
	}
}