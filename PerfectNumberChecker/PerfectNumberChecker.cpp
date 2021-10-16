//PerfectNumberChecker
// Other perfect numbers are 28, 496, and 8,128
#include <iostream>
using namespace std;

bool perfectNumberChecker(int nInput);
void perfectNumberFinder();
int main() {
	long nInput(0);
	cout<<"Insert an integer: ";
	cin>>nInput;
	cout<<perfectNumberChecker(nInput)<<endl;
	perfectNumberFinder();
}

bool perfectNumberChecker(int nInput) {
	int sum(0);
	for (int i=1; i<=nInput/2; i++) {
		if (nInput%i==0) {
			sum+=i;
		}
	}
	return (nInput==sum);
}

void perfectNumberFinder() {
	int nStart, nEnd;
	cout<<"Insert starting number: ";
	cin>>nStart;
	cout<<"Insert final number: ";
	cin>>nEnd;
	for (int i=nStart; i<=nEnd; i++) {
		if (perfectNumberChecker(i)) {
			cout<<"Perfect number: "<<i<<endl;
		}
	}
	
}

