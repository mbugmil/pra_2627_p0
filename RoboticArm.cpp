#include "RoboticArm.h"

RoboticArm::RoboticArm (double x, double y, double z, bool Connect){
	this ->x = x;
	this ->y = y;
	this ->z = z;
	this ->Connect = Connect;
}

double RoboticArm::Consulx() const{
	return x;
}
double RoboticArm::Consuly() const{
	return y;
}
double RoboticArm::Consulz() const{
	return z;
}
bool RoboticArm::ConsulConnect() const{
	return Connect;
}

void RoboticArm :: grab(){
	Connect = true;
}
void RoboticArm :: release(){
	Connect = false;
}
void RoboticArm :: move(double x, double y, double z){
	this ->x = x;
	this ->y = y;
	this ->z = z;

}
