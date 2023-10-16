#pragma once
#include "AllTransport.h"

class Truck : public AllTransport
{
private:
	double load;
	double max_load;
public:
	Truck(double l, double max_l, double p, double max_p);
	double getCurrentLoad();	
	double getMaxLoad();		
	void arrive();					
	bool leave();
};

