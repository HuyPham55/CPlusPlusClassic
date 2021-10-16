//19 S(n)=1-2+3-4+5- . . . + ( (-1)^(n+1) )*n (n>0)
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn-1-23-45-1n1n-n0-1450
#include <iostream>
#include <math.h>
using namespace std;

int calc(int nInput);
int calcSample(int nInput);

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
		sum+= pow((-1), (i+1)&1)*i;
//		cout<<pow((-1), (i+1)&1)*i<<endl;
	}
	return sum;
}

int calcSample(int nInput) {
	int sum(0);
	int switcher(-1);
	for (int i=0; i<=nInput; i++) {
		sum+=switcher*i;
		switcher*=-1;
	}
	return sum;
}
