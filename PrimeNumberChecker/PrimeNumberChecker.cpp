//PrimeNumberChecker
//The Algorithm to see if x is a prime number.
//1. Find the square root of x.  Round this down to the nearest whole number. We call this truncating a number.
//2. Check all of the prime numbers less than or equal to the truncated square root of x. (try 9 to see the difference)
//3. If none of these prime numbers divide evenly into the x, then x is prime.
#include <iostream>
#include <math.h>
using namespace std;

bool primeNumberChecker(int nInput);
void primeNumberFinder();
int main() {
	long nInput(0);
	cout<<"Insert an integer: ";
	cin>>nInput;
	cout<<primeNumberChecker(nInput)<<endl;
//	primeNumberFinder();
}

bool primeNumberChecker(int nInput) {
	if (nInput<2) return false;
	for (int i=2; i<=sqrt(nInput); i++) {
		if (nInput%i==0) {
			return false;
		}
	}
	return true;
}
