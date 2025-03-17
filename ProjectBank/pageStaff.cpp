#include "PageStaff.h"

PageStaff::PageStaff()
{
}

PageStaff::~PageStaff()
{
}

void PageStaff::main()
{
	BasePage::setTitle("CHUC NANG");
	BasePage::setSayHi("Chao Hai!");
	BasePage::main();
	BasePage::txtSayHi.display();
	setUI();
	handle();
}

void PageStaff::setUI()
{
	int posY = 5;
	for (int i = 0; i < 3; i++)
	{
		listText.push_back(Text());
		listText[i].setPosition(25, posY + 1);
		posY += 3;
	}

	listText[0].setContent("Thong Tin");
	listText[0].display();

	listText[1].setContent("Danh Sach");
	listText[1].display();

	listText[2].setContent("Dang Xuat");
	listText[2].display();
}

void PageStaff::handle()
{
	_getch();
}