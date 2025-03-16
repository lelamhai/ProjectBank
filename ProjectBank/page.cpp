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
	while (true)
	{
		switch (currentPage)
		{
		case Page_SignIn:
			showCur(0);
			PageSignIn* pageSignIn = new PageSignIn();
			pageSignIn->main();
			break;
		/*case Page_SignUp:
			break;*/

		/*default:
			break;*/
		}
		_getch();
	}
}