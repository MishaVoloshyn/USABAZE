#include "Baze.h"
#include "AllTransport.h"
#include <iostream>
using namespace std;

Base::Base()
{
	people_on_base = 0;
	vehicles_on_base = 0;
	petrol_on_base = 0.0;
	goods_on_base = 0.0;
}

Base::Base(int people, int vehicles, double petrol, double goods)
{
	people_on_base = people;
	vehicles_on_base = vehicles;
	petrol_on_base = petrol;
	goods_on_base = goods;
}

void Base::Print() const {
	cout << "On base: " << endl;
	cout << "People: " << people_on_base << endl;
	cout << "Vehicles: " << vehicles_on_base << endl;
	cout << "Petrol: " << petrol_on_base << endl;
	cout << "Goods: " << goods_on_base << endl;
}

void Base::AddVehicle(AllTransport* v) {
	vehicle = v;
}

void Base::SetPeopleBase(int p)
{
	people_on_base = p;
}

void Base::SetAllTransportBase(int v)
{
	vehicles_on_base = v;
}

void Base::SetPetrolBase(double petrol)
{
	petrol_on_base = petrol;
}

void Base::SetGoodsBase(double goods)
{
	goods_on_base = goods;
}

int Base::GetPeopleBase() const
{
	return people_on_base;
}

int Base::GetAllTransportBase() const
{
	return vehicles_on_base;
}

double Base::GetPetrolBase() const
{
	return petrol_on_base;
}

double Base::GetGoodsBase() const
{
	return goods_on_base;
}

Base::~Base()
{
	delete[] vehicle;
}