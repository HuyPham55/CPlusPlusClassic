//27
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn-1-112-1123-1123n-n0-1458
#include <iostream>
#include <math.h>
using namespace std;

float calculator(int nInput);


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
	int denominator(0);
	for (int i=1; i<=nInput; i++) {
		denominator+=i;
		sum+=((double) 1/denominator);
	}
	return sum;
}

