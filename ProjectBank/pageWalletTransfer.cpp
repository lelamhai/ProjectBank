#include "PageWalletTransfer.h"


PageWalletTransfer::PageWalletTransfer()
{
}

PageWalletTransfer::~PageWalletTransfer()
{
}

void PageWalletTransfer::main()
{
	BasePage::setTitle("GIAO DICH");
	BasePage::main();
	setUI();
	handle();
}

void PageWalletTransfer::setUI()
{
	gotoXY(5, 4);
	cout << "So du: ";

	txtPoint.setContent("100");
	txtPoint.setPosition(12, 4);
	txtPoint.display();

	int posY = 5;

	for (int i = 0; i < 2; i++)
	{
		listText.push_back(Text());
		listInput.push_back(InputField());

		listText[i].setPosition(18, posY + 1);

		listInput[i].setPosition(30, posY);
		listInput[i].drawBox();
		listInput[i].display();

		posY += 3;
	}

	listText[0].setContent("So Diem:");
	listText[0].display();
	listText[1].setContent("Nguoi Nhan:");
	listText[1].display();

	txtMessage.setPosition(20, posY);
	txtMessage.setContent("Tai Khoan Khong Dung.");
	txtMessage.setColor(ColorCode_DarkRed);
	txtMessage.display();

	gotoXY(28, posY + 4);
	cout << "Enter";
	box(26, posY + 3, 8, 2);
}

void PageWalletTransfer::handle()
{
	_getch();
}