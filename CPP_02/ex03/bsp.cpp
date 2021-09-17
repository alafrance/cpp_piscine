#include "Point.hpp"

Fixed	inside_or_not(Point p, Point v1, Point v2)
{
	std::cout << "\nx : " << v1.getX() << ", y : " << v1.getY() << std::endl;
	std::cout << "x : " << v2.getX() << ", y : " << v2.getY() << std::endl;

    return (p.getX() - v2.getX()) * (v1.getY() - v2.getY()) - (v1.getX() - v2.getX()) * (p.getY() - v2.getY());
}

Point	calculate_vector(Point a, Point b){
	Point v(b.getX() - a.getX(), b.getY() - a.getY());
	return (v);
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Point	vAB = calculate_vector(a, b);
	Point	vBC = calculate_vector(b, c);
	Point	vAC = calculate_vector(a, c);
	
	// std::cout << "point: x : " << point.getX() << ", y : " << point.getY() << std::endl;
	std::cout << "AB: x : " << vAB.getX() << ", y : " << vAB.getY() << std::endl;
	std::cout << "BC: x : " << vBC.getX() << ", y : " << vBC.getY() << std::endl;
	std::cout << "AC: x : " << vAC.getX() << ", y : " << vAC.getY() << "\n\n";
	std::cout << "point with vAB/vAC : " << inside_or_not(point, vAB, vAC) << "\n\n";
	std::cout << "point with vCB/vCA : " << inside_or_not(point, vBC, vAC) << "\n\n";
	std::cout << "point with vBC/vBA : " << inside_or_not(point, vBC, vAB) << "\n\n";
	// Sign(point, vAB, vAC); // MAYBE NEGATIVE VECTOR
	return (true);
}
