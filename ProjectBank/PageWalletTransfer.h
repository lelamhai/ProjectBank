#pragma once
#include <vector>
#include "BasePage.h"

class PageWalletTransfer:public BasePage
{
private:
	Text txtPoint;
	vector<InputField> listInput;
	vector<Text> listText;
	Text txtMessage;

public:
	void main() override;
	void setUI();
	void handle();
	PageWalletTransfer();
	~PageWalletTransfer();
};
