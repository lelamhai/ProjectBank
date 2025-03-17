#pragma once
#include <vector>
#include "BasePage.h"

class PageCustomer:public BasePage
{
private:
	vector<Text> listText;

public:
	void main() override;
	void setUI();
	void handle();
	PageCustomer();
	~PageCustomer();
};