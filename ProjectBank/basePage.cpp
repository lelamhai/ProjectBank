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

	txtSayHi.setPosition(45, 1);
	txtSayHi.setContent(name);
}

void BasePage::setTitle(string text)
{
	this->title = text;
}

void BasePage::setSayHi(string name)
{
	this->name = name;
}