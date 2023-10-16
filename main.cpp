#include "Baze.h"
#include "AllTransport.h"
#include "PassagerBus.h"
#include "Truck.h"

#include <iostream>
using namespace std;

int main()
{
    Base* base = new Base(2500, 350, 1500, 8000);      
    AllTransport* bus = new Bus(70, 120, 7, 90);           
    AllTransport* truck = new Truck(25, 350, 700, 12000);    

    cout << "Base Info: " << endl << endl;
    base->Print();
    cout << endl << endl << endl;
    for (int i = 0; i < 3; i++)
    {
        if (bus->leave())
        {
            cout << "Bus left" << endl;
        }
        else
        {
            cout << "Bus can't leave" << endl;
        }

    }

    for (int i = 0; i < 3; i++)
    {
        bus->arrive();
    }
    cout << "Base Info" << endl << endl;
    base->Print();
    cout << endl << endl << endl;


    for (int i = 0; i < 4; i++)
    {
        if (truck->leave())
        {
            cout << "Truck left" << endl;
        }
        else
        {
            cout << "Truck can't leave" << endl;
        }

    }
    truck->arrive();
    cout << "Base Info:\n " << endl << endl;
    base->Print();
   

}