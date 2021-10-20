//29
//S(n)=1+(1+2)+(1+2+3)+...+(1+2+3+...+n) (n>0)
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
	if (nInput<=0) {
		cout<<"Invalid input";
	}
}

long long calculator(int nInput) {
	long long sum(0);
	long long temp(0);
	for (int i=0; i<=nInput; i++) {
		temp+=i;
		sum+=temp;
	}
	return sum;
}


