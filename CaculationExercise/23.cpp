//23 S(n) = 1+ 2^2 + 3^3 + ...  + n^n (n>=0)

#include <iostream>
#include <math.h>
using namespace std;

long calculator(int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	if (nInput<0) {
		cout<<"Invalid input";
		return 0;
	}
	cout<<calculator(nInput)<<endl;				
}

long calculator(int nInput) {
	long sum(0);
	for (int i=1; i<=nInput; i++) {
		sum+=pow(i, i);
	}
	return sum;
}
