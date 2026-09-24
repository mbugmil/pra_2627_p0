#ifndef ROBOTICARM_H
#define ROBOTICARM_H
class RoboticArm{
	private:
		double x, y, z;
		bool Connect;
	public:
		RoboticArm(double x, double y, double z, bool Connect);
		double Consulx() const;
		double Consuly() const;
		double Consulz() const;
		bool ConsulxConnect() const {return Connect;}
		void grab();
		void release();
		void move (double x, double y, double z);
}
#endif
