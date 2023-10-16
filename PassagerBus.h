#pragma once
#include "AllTransport.h"
class Bus :public AllTransport
{
private:
	int people;
	int max_people;

public:
	Bus(int peop, int max_peop, double tank, double petrol);
	int getPeopleCount();			
	int getMaxPeople();				
	void arrive();					
	bool leave();
};
