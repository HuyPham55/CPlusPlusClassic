#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <time.h>
using namespace std;
int main() {
	int namsinh;
	cout << "Insert your birth year: ";
	cin >> namsinh;

	time_t Time = time(NULL);
	tm *now = localtime(&Time);
	int year=now->tm_year+1900;
	cout << "Your age is: " << year - namsinh << endl;
	system("pause");
	return 0;
}