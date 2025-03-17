#include "PageSignUp.h"

PageSignUp::PageSignUp()
{
}

PageSignUp::~PageSignUp()
{
}

void PageSignUp::main()
{
	BasePage::setTitle("DANG KY");
	BasePage::setSayHi("Chao Hai!");
	BasePage::main();
	BasePage::txtSayHi.display();
	setUI();
	handle();
}

void PageSignUp::setUI()
{
	int posY = 4;

	for (int i = 0; i < 4; i++)
	{
		listText.push_back(Text());
		listInput.push_back(InputField());

		listText[i].setPosition(15, posY + 1);


		listInput[i].setPosition(30, posY);
		listInput[i].drawBox();
		listInput[i].display();

		posY += 3;
	}

	listText[0].setContent("Ho Va Ten");
	listText[0].display();

	listText[1].setContent("So Dien Thoai");
	listText[1].display();

	listText[2].setContent("Dia Chi Mail");
	listText[2].display();

	listText[3].setContent("Mat Khau");
	listText[3].display();

	txtMessage.setPosition(20, posY);
	txtMessage.setContent("Tai Khoan Khong Dung.");
	txtMessage.setColor(ColorCode_DarkRed);
	txtMessage.display();

	gotoXY(28, posY + 3);
	cout << "Enter";
	box(26, posY + 2, 8, 2);
}

void PageSignUp::handle()
{
	while (true)
	{
		if (currentPageSignUp == FULLNAME)
		{
			listInput[0].handleInput();

			switch (listInput[0].getEndKey())
			{
			case KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "" && listInput[2].getText() != "")
				{
					currentPageSignUp = StateInputSignUp::ENTER;
					break;
				}

				currentPageSignUp = StateInputSignUp::TELLPHONE;
				break;

			case KeyState::UP:
				currentPageSignUp = StateInputSignUp::PASSWORD;
				break;

			case KeyState::DOWN:
				currentPageSignUp = StateInputSignUp::TELLPHONE;
				break;

			default:
				break;
			}

		}

		if (currentPageSignUp == TELLPHONE)
		{
			listInput[1].handleInput();

			switch (listInput[1].getEndKey())
			{
			case  KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "" && listInput[2].getText() != "")
				{
					currentPageSignUp = StateInputSignUp::ENTER;
					break;
				}
				currentPageSignUp = StateInputSignUp::MAIL;
				break;

			case KeyState::UP:
				currentPageSignUp = StateInputSignUp::FULLNAME;
				break;

			case KeyState::DOWN:
				currentPageSignUp = StateInputSignUp::MAIL;
				break;

			default:
				break;
			}
		}

		if (currentPageSignUp == MAIL)
		{
			listInput[2].handleInput();

			switch (listInput[2].getEndKey())
			{
			case  KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "" && listInput[2].getText() != "")
				{
					currentPageSignUp = StateInputSignUp::ENTER;
					break;
				}
				currentPageSignUp = StateInputSignUp::PASSWORD;
				break;

			case KeyState::UP:
				currentPageSignUp = StateInputSignUp::TELLPHONE;
				break;

			case KeyState::DOWN:
				currentPageSignUp = StateInputSignUp::PASSWORD;
				break;

			default:
				break;
			}
		}

		if (currentPageSignUp == PASSWORD)
		{
			listInput[3].handleInput();

			switch (listInput[3].getEndKey())
			{
			case  KeyState::ENTER:
				if (listInput[0].getText() != "" && listInput[1].getText() != "" && listInput[2].getText() != "")
				{
					currentPageSignUp = StateInputSignUp::ENTER;
					break;
				}
				currentPageSignUp = StateInputSignUp::FULLNAME;
				break;

			case KeyState::UP:
				currentPageSignUp = StateInputSignUp::MAIL;
				break;

			case KeyState::DOWN:
				currentPageSignUp = StateInputSignUp::FULLNAME;
				break;

			default:
				break;
			}
		}

		if (currentPageSignUp == ENTER)
		{
			bool flag = false;
			if (flag)
			{

				return;
			}
			currentPageSignUp = FULLNAME;
			txtMessage.display();
		}
	}
}