#include <iostream>
using namespace std;
bool isLeapYear(int nInput);
int main() {
	int nInput(2001);
	cout<<isLeapYear(nInput);
}

bool isLeapYear(int nInput) {
	if ((!(nInput % 4) && nInput % 100) || !(nInput % 400)) 
	{
	  return true;
	}
	return false;
}

