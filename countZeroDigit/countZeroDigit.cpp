//countZeroDigit
//https://codelearn.io/training/detail/6443
//Sample test case: a=39204, b=9010401, expected output:5299142

#include <iostream>
using namespace std;

void inputData(int &a, int &b);
int countZeroDigit(int a, int b);

int main() {
	int a, b;
	inputData(a,b);
	cout<<countZeroDigit(a,b)<<endl;	
}


void inputData (int &a, int &b) {
	cout<<"a? ";
	cin>>a;
	if (a<=0) {
		cout<<"Invalid input";
	}
	cout<<"b? ";
	cin>>b;
	if (b<=0||b<a) {
		cout<<"Invalid input";
	}
}


int countZeroDigit(int a, int b) {
	int count(0);
	
	for (int i=a; i<=b; i++) {
		int temp=i;
		while (!temp<10) {
			if (temp%10==0) {
				count++;
			}
			temp/=10;
			cout<<count<<endl;
		}
	}
	
	return count;
}
