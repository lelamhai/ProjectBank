#pragma once
#include <vector>
#include "BasePage.h"

class PageAdmin:public BasePage
{
private:
	vector<Text> listText;

public:
	void main() override;
	void setUI();
	void handle();
	PageAdmin();
	~PageAdmin();
};
