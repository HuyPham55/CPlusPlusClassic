#include <iostream>
using namespace std;
int main() {
	double km;
	cout << "Insert distance in kilometer: ";
	cin >> km;
	double taxifare(0);
	if (km <= 1) taxifare = 15000;
	else if (km <= 5) taxifare = km * 13500;
	else if (km <= 120) taxifare = km * 11000;
	else taxifare = km * 11000 * 0.9;

	cout << "Your taxi fare is: " << (size_t)taxifare;
	cout << endl;
	system("pause");
	return (0);
}

#ifndef : if not define (avoid namespace declare duplication), end with #endif
#pragma_once