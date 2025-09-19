#include <iostream>
#include <cmath>
// Escape Velocity Practice Implementing formulas
// Formula v1 = sqrt((2 * G * M) / (R))

int main() {

	double velocity1;
	const double G = 6.67e-11;//(m/s^2)
	double mEarthMassKg = 5.972e24;//(kilograms)
	double rEarthMeters = 6378137;

	double velocity2;
	double mMoonKg = 7.34767309e22;//kilograms
	double rMoonMeters = 1.7374e6;

	velocity1 = sqrt((2 * G * mEarthMassKg) / (rEarthMeters));
	std::cout << "Earth Escape velocity\n";
	std::cout << velocity1 << " m/s\n";
	std::cout << velocity1 * 2.23694 << " mph\n\n";

	velocity2 = sqrt((2 * G * mMoonKg) / (rMoonMeters));
	std::cout << "Moon Escape velocity\n";
	std::cout << velocity2 << " m/s\n";
	std::cout << velocity2 * 2.23694 << " mph";
	return 0;
}