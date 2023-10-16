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
	double getTank();			//������ ����� ��������� � ������;
	double getPetrol();		//������ ������� ���������� ������� � ����;
	virtual void arrive() = 0;		// �������� �� ����;
	virtual bool leave() = 0;		//������ ������ ��� � �������� ����; � ������ ������������� ������ ���������� false;
};
