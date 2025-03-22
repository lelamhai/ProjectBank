#include "PageForgotPassword.h"

PageForgotPassword::PageForgotPassword()
{
}

PageForgotPassword::~PageForgotPassword()
{
}

void PageForgotPassword::main()
{
	BasePage::setTitle("DOI MAT KHAU");
	BasePage::main();
	setUI();
	handle();
}

void PageForgotPassword::setUI()
{
	int posY = 5;

	for (int i = 0; i < 2; i++)
	{
		listText.push_back(Text());
		listInput.push_back(InputField());

		listText[i].setPosition(10, posY + 1);

		listInput[i].setPosition(30, posY);
		listInput[i].drawBox();
		listInput[i].display();

		posY += 3;
	}

	listText[0].setContent("Mat Khau Moi");
	listText[0].display();

	listText[1].setContent("Nhap Lai Mat Khau");
	listText[1].display();

	txtMessage.setPosition(20, posY);
	txtMessage.setContent("Tai Khoan Khong Dung.");
	txtMessage.setColor(ColorCode_DarkRed);

	gotoXY(28, posY + 4);
	cout << "Enter";
	box(26, posY + 3, 8, 2);
}

void PageForgotPassword::handle()
{
	while (true)
	{
		if (currentFP == USERNAME)
		{
			listInput[0].handleInput();

			switch (listInput[0].getEndKey())
			{
			case KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "")
				{
					currentFP = StateInputFP::ENTER;
					break;
				}

				currentFP = PASSWORD;
				break;

			case KeyState::UP:
				currentFP = PASSWORD;
				break;

			case KeyState::DOWN:
				currentFP = PASSWORD;
				break;

			default:
				break;
			}

		}

		if (currentFP == PASSWORD)
		{
			listInput[1].handleInput();

			switch (listInput[1].getEndKey())
			{
			case  KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "")
				{
					currentFP = StateInputFP::ENTER;
					break;
				}
				currentFP = USERNAME;
				break;

			case KeyState::UP:
				currentFP = USERNAME;
				break;

			case KeyState::DOWN:
				currentFP = USERNAME;
				break;

			default:
				break;
			}
		}

		if (currentFP == ENTER)
		{
			a.ForgotPassword(0, "lelamhai");

			currentFP = USERNAME;
			txtMessage.display();
		}
	}
}