#include <iostream>
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/dem-so-chu-so-cua-so-nguyen-duong-1288

using namespace std;

int digitCounter(int nInput) {
	int temp(0);
	while (nInput!=0) {
		temp++;
		nInput/=10;
	}
	return temp;
}


int digitCounterRecursion(int nInput) 
{
	if (nInput != 0) 
		return 1+digitCounterRecursion(nInput/10); 
	return 0;
} 

int main() {
	long nInput(0);
	cout<"Insert an integer: ";
	cin>>nInput;
	cout<<digitCounterRecursion(nInput);
	
}
