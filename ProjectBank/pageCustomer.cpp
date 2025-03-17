#include "PageCustomer.h"
PageCustomer::PageCustomer()
{
}

PageCustomer::~PageCustomer()
{
}

void PageCustomer::main()
{
	BasePage::setTitle("CHUC NANG");
	BasePage::setSayHi("Chao Hai!");
	BasePage::main();
	BasePage::txtSayHi.display();
	setUI();
	handle();
}

void PageCustomer::setUI()
{
	int posY = 5;
	for (int i = 0; i < 4; i++)
	{
		listText.push_back(Text());
		listText[i].setPosition(25, posY + 1);
		posY += 3;
	}

	listText[0].setContent("Thong Tin");
	listText[0].display();

	listText[1].setContent("Xem Vi");
	listText[1].display();

	listText[2].setContent("Chuyen Diem");
	listText[2].display();

	listText[3].setContent("Dang Xuat");
	listText[3].display();
}

void PageCustomer::handle()
{
	_getch();
}