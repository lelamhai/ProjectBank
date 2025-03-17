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
	PageStaff* s;
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

		case Page_Staff:
			showCur(0);
			s = new PageStaff();
			s->main();
			delete s;
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