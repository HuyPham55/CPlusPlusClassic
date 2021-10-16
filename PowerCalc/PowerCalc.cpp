//28
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-px-y-xy-1459

#include <iostream>
#include <math.h>
using namespace std;

void inputData(int &nInput, int &nPower);
long long  calculator(int nInput, int nPower);
long long calculatorRecursion(int nInput, int nPower);
long long calcSample(int nInput, int nPower);

int main() {
	int nInput, nPower;
//	inputData(nInput, nPower);
	nInput=5;
	nPower=15;

	
	cout<<calculator(nInput, nPower)<<endl;		
//	cout<<calculatorRecursion(nInput, nPower)<<endl;		
//	cout<<calcSample(nInput, nPower)<<endl;				
}


void inputData (int &nInput, int &nPower) {
	cout<<"N? ";
	cin>>nInput;
	if (nInput<=0) {
		cout<<"Invalid input";
	}
	cout<<"Power of N? ";
	cin>>nPower;
}


long long  calculator(int nInput, int nPower) {
	int temp=nInput;
	for (int i=1; i<nPower; i++) {
		nInput*=temp;
	}
	return nInput;
}


long long calculatorRecursion(int nInput, int nPower) {
	if (nPower==1) {
		return nInput;
	} else {
		return nInput*calculatorRecursion(nInput, nPower-1);
	}
}

long long  calcSample(int nInput, int nPower) {
	if (nPower==1) {
		return nInput;
	}
	
	if (nPower&1) {
		//nPower = 2*n+1 //odd
		long ans = calcSample(nInput, nPower/2);
		return ans*ans*nInput;
	} 
	//nPower = 2*n //even
	long ans = calcSample(nInput, nPower/2);
	return ans*ans;
	
}
