#pragma once
#include <iostream>
using namespace std;

class Singleton
{
private:
	static Singleton* instance;
public:
	string ID;
	static Singleton* getInstance();
	void print();
	Singleton();
	~Singleton();
};