#include "stdafx.h"
#include "transport.h"
#include <vector>
#include <string>
#include <iostream>

int main()
{
	using namespace std;
	using namespace transp;


	cout << "Transport: ";
	Transport tr;
	tr.set_maxSpeed(300);
	tr.set_maxLoad(1500);
	tr.set_weight(7000);

	tr.hit_the_road();
	cout << tr.get_maxLoad() << " " 
		<< tr.get_maxSpeed() << " "
		<< tr.get_weight() << endl;


	cout << endl << "Water transport: ";
	Water_Transport wt_tr;
	wt_tr.set_maxSpeed(60);
	wt_tr.set_isWomanOnBoard(false);
	wt_tr.set_crewCount(100);

	wt_tr.hit_the_road();
	cout << wt_tr.get_maxSpeed() << " "
		<< wt_tr.get_isWomanOnBoard() << " "
		<< wt_tr.get_crewCount() << " "
		<< wt_tr.get_weight() << endl;


	cout << endl << "Helicopters: ";
	Helicopters heli;

	heli.hit_the_road();
	cout << heli.get_maxSpeed() << " "
		<< heli.get_screwCount() << " "
		<< heli.get_chassisType() << endl;


	cout << endl << "Amphibians: ";
	Amphibians amph;

	amph.set_wheelsCount(4);
	amph.set_crewCount(1);

	cout << amph.get_wheelsCount() << " "
		<< amph.get_crewCount() << endl << endl;


	system("pause");
	return 0;
}