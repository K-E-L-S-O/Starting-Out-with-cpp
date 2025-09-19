#include <iostream>
#include <cmath>

int main() {

	//Formula Force = Gm1m2/r^2
	//Our constant G = 9.807 m/s^2
	const float G = 6.6743e-11; //meters per second squared
	double m1Moon = 7.34767309e22; //(kg)
	double m2Earth = 5.97219e24; //(km)
	double rDistance = 3.844e8;

	double Force = G * (m1Moon * m2Earth) / (rDistance * rDistance);

	std::cout << Force;

	return 0;
}