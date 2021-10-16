//21
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn-1-23-45-1n1n-n0-1450
#include <iostream>
#include <math.h>
using namespace std;
int calc(int nInput);
int calcSample (int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	if (nInput<=0) {
		cout<<"Invalid input";
		return 0;
	}
//	cout<<calc(nInput);
	cout<<calcSample(nInput);
}

int calc(int nInput) {
	int sum(0);
	for (int i = 0 ; i<=nInput; i++) {
		sum+= pow(i,2);
	}
	return sum;
}

int calcSample(int nInput) {
	int sum(0);
	for (int i=0; i<=nInput; i++) {
		sum+=i*i;
	}
	return sum;
}
