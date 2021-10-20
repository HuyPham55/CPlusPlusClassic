//Fibonacci sequence calc
//30
//Binnary recursion
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
//The first (nInput=1) element of the fibonacci sequence is 0, then 1 (nInput=2)
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/xuat-ra-day-so-fibonacci-1461

#include <iostream>
#include <math.h>
using namespace std;

void inputData(int &nInput);
long long calculator(int nInput);


int main() {
	int nInput;
	inputData(nInput);
	cout<<calculator(nInput)<<endl;					
}


void inputData (int &nInput) {
	cout<<"N? ";
	cin>>nInput;
	if (nInput<= 2) {
		cout<<"Invalid input";
	}
}


long long calculator(int nInput) {
	if (nInput==1 || nInput==2) {
		return nInput-1;
	}
	return calculator(nInput-1)+calculator(nInput-2);
}


