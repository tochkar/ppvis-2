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
}