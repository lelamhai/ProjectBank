#include "Page.h"
#include <iostream>
using namespace std;

void main()
{
	Page* page = new Page();
	page->setRunPage(Page_Staff);
	page->main();
	delete page;
}