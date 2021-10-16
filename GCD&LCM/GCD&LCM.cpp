//GCD and LCM (Least Common Multiple)
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tim-uoc-so-chung-lon-nhat-va-boi-so-chung-nho-nhat-cua-a-va-b-1444

#include <iostream>
using namespace std;

int GCD(int a, int b);
int GCDEuclid(int a, int b);
int LCM(int a, int b);

int main() {
	int a, b;
	cout<<"a? ";
	cin>>a;
	cout<<"b? ";
	cin>>b;
	cout<<"GCD: "<<GCDEuclid(a,b)<<endl;
	cout<<"LCM: "<<LCM(a,b);
	
}


int GCD(int a, int b) {
	if (a!=b) {
		if (a>b) {
			return GCD(a-b,b);
		}
		return GCD(b-a,a);
	}
	return a;
}

int LCM(int a, int b) {
	return (a/GCD(a,b))*b;
}

int GCDEuclid(int a, int b) {
	if (a*b==0) {
		return a==0?b:a;
	}
	if (a>b) {
		return GCDEuclid(a%b, b);
	} 
	return GCDEuclid(a, b%a);
}

//How to Find the LCM – FAST!!!
//Step 1) Find the GCF for the two numbers. For 18 and 30, GCF is 6.
//Step 2) Divide that GCF into either number; it doesn't matter which one you choose, so choose the one that's easier to divide. Choose 18. ...
//Step 3) Take that answer and multiply it by the other number. ...
//Step 4) Celebrate …
