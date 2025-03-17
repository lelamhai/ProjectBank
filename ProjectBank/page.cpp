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

		/*default:
			break;*/
		}
	}
}