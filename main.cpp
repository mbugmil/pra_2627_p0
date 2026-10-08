#include <iostream>
#include "RoboticArm.h"

using namespace std;

int main(){

	RoboticArm robot (0.0, 0.0, 0.0, false);

	cout << "Posicion inicial: " << endl;
	cout << "X: " << robot.getX() << endl;
	cout << "Y: " <<  robot.getY() << endl;
	cout << "Z: " <<  robot.getZ() << endl;
	cout << "Sujetando objeto: " <<  robot.getHolding() << endl;

	cout << "Moviendo brazo... " << endl;

	robot.move(10.0, 5.0, 3.0);
	
	cout << "Nueva posicion: " << endl;
	cout << "X: " << robot.getX() << endl;
	cout << "Y: " <<  robot.getY() << endl;
	cout << "Z: " <<  robot.getZ() << endl;
	
	cout << "El robot coge un objeto..." << endl;
	robot.grab();
	
	cout << "Sujetando objeto: " <<  robot.getHolding() << endl;

	return 0;
}
