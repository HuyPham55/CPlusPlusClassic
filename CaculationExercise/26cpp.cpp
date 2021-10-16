#include <iostream>
#include <math.h>
using namespace std;

float calculator(int nInput);
//float calculatorSample(int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	if (nInput<=0) {
		cout<<"Invalid input";
		return 0;
	}
	cout<<calculator(nInput)<<endl;				
//	cout<<calculatorSample(nInput)<<endl;	
}

float calculator(int nInput) {
	float sum = 0;
	int numerator(0);
	int denominator(1);
	for (int i=1; i<=nInput; i++) {
		numerator+=i;
		denominator*=i;
		sum+=((double) numerator/denominator);
	}
	return sum;
}

