//NacissiticNumberChecker
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/kiem-tra-so-tu-man-narcissistic-number-1297
#include <iostream>
#include <math.h>
using namespace std;



int digitCounter(int nInput);
bool narcissiticChecker(int nInput);

int main() {
	long nInput(0);
	cout<<"Insert an integer: ";
	cin>>nInput;
	cout<<narcissiticChecker(nInput)<<endl;
	cout<<"nInput after: "<<nInput;
	
}


int digitCounter(int nInput) {
	int temp(0);
	while (nInput!=0) {
		temp++;
		nInput/=10;
	}
	return temp;
}


bool narcissiticChecker(int nInput) {
	long nSum(0);
	long temp;
	long numberOfDigit = digitCounter(nInput);
	temp=nInput;
	while (nInput) {
		nSum += pow(nInput%10, numberOfDigit);
		nInput/=10;
	}	
	return (nSum==temp);
}

