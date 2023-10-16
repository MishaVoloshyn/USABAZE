#pragma once
#include "AllTransport.h"

class Base
{
protected:
	AllTransport* vehicle;
public:
	static int people_on_base;
	static int vehicles_on_base;
	static double petrol_on_base;
	static double goods_on_base;

	Base();
	Base(int people, int vehicles, double petrol, double goods);

	void Print() const;
	void AddVehicle(AllTransport*);

	void SetPeopleBase(int p);
	void SetAllTransportBase(int v);
	void SetPetrolBase(double petrol);
	void SetGoodsBase(double goods);

	int GetPeopleBase() const;
	int GetAllTransportBase() const;
	double GetPetrolBase() const;
	double GetGoodsBase() const;

	~Base();
};

