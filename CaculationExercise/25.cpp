//25 
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn1-12-13-1n-n0-1456

#include <iostream>
#include <math.h>
using namespace std;	
long factorial(int nInput);
float calculator(int nInput);
float calculatorSample(int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	if (nInput<=0) {
		cout<<"Invalid input";
		return 0;
	}
//	cout<<calculator(nInput)<<endl;				
	cout<<calculatorSample(nInput)<<endl;	
}

long factorial(int nInput) {
  long temp(1);
  for (long i = 1; i <= nInput; i++) {
    temp *= i;
  }
  return temp;
}

float calculator(int nInput) {
	float sum = 0;
	for (int i=1; i<=nInput; i++) {
		sum+=((double) 1/factorial(i));
	}
	return sum;
}

float calculatorSample(int nInput) {
	float sum = 0;
	int temp(1);
	for (int i=1; i<=nInput; i++) {
		temp*=i;
		sum+=((double) 1/(temp));
	}
	return sum;
}
