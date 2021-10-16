//DivisorCounter
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/viet-chuong-trinh-dem-uoc-so-cua-so-nguyen-duong-n-1445

#include <iostream>
using namespace std;

int countNumberOfDivisors(int nInput);

int main() {
	long nInput(0);
	cout<"Insert an integer: ";
	cin>>nInput;
	cout<<"Count: "<<countNumberOfDivisors(nInput);
	
}

int countNumberOfDivisors(int nInput) {
	int count(0);
	for (int i = 1; i<=nInput/2; i++) {
		if (nInput%i==0) {
			count++;
		}		
	}
	return count;
}
