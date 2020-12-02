#pragma once
#include <string>

class GUI
{
public:
	GUI();
	virtual ~GUI();
	void setArray();
	void getArray();
private:
	int Amount;
	int array[200];
};

