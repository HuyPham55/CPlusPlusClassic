//22 S(n)=1+½ + 1/3+...+1/n  (n>0)

#include <iostream>
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
	float sum(0);
	for (int i=1; i<=nInput; i++) {
		sum+=(1.0/i);
	}
	return sum;
}
