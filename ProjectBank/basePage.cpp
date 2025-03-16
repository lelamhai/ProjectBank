#include "BasePage.h"

BasePage::BasePage()
{
}

BasePage::~BasePage()
{
}

void BasePage::main()
{
	draw();
}

void BasePage::draw()
{
	box(0, 0, 60, 22);
	txtTitle.setPosition(25, 2);
	txtTitle.setContent(title);
	txtTitle.display();
}

void BasePage::setTitle(string text)
{
	this->title = text;
}