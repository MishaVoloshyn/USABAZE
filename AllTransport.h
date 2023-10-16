#pragma once
class AllTransport
{
protected:
    double petrol;
	double petrol_amount;
	double max_petrol;
	double tank_volume;
	
public:
	AllTransport(double tank, double petrol);
	double getTank();			//узнать объем бензобака в литрах;
	double getPetrol();		//узнать текущее количество топлива в баке;
	virtual void arrive() = 0;		// приехать на базу;
	virtual bool leave() = 0;		//залить полный бак и покинуть базу; в случае невозможности уехать возвращает false;
};
