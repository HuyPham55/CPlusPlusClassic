//24 
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn12-23-34-nn1---n0-1455
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
}


float calculator(int nInput) {
	float sum = (float) 0;
	for (int i=0; i<=nInput; i++) {
		sum+=((double) i/(i+1));
	}
	return sum;
}
