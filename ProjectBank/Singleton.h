#pragma once
#include <iostream>
using namespace std;

class Singleton
{
private:
	static Singleton* instance;
public:
	string UserID;
	static Singleton* getInstance();
	Singleton();
	~Singleton();
};