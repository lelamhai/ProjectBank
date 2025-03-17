#pragma once
#include <vector>
#include "BasePage.h"

class PageStaff:public BasePage
{
private:
	vector<Text> listText;

public:
	void main() override;
	void setUI();
	void handle();
	PageStaff();
	~PageStaff();
};
