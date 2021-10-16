//21: S(n) =  12 + 22 + 32 + ... + n2 (n>0)
#include <iostream>
using namespace std;

long calculator(int nInput);


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

long calculator(int nInput) {
	long sum(0);
	for (int i=1; i<=nInput; i++) {
		sum+=i*10+2;
	}
	return sum;
}
