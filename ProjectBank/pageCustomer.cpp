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
	BasePage::main();
	setUI();
	handle();
}

void PageCustomer::setUI()
{
	listText.push_back(Text());
	listText[0].setContent("Chao Hai!");
	listText[0].setPosition(50, 1);
	listText[0].display();

	int posY = 5;
	for (int i = 1; i <= 4; i++)
	{
		listText.push_back(Text());
		listText[i].setPosition(25, posY + 1);
		posY += 3;
	}

	listText[1].setContent("Thong Tin");
	listText[1].display();

	listText[2].setContent("Xem Vi");
	listText[2].display();

	listText[3].setContent("Chuyen Diem");
	listText[3].display();

	listText[4].setContent("Dang Xuat");
	listText[4].display();

	
}

void PageCustomer::handle()
{
	_getch();
}