//20 S(n) = 1 + 1.2 + 1.2.3+...+1.2.3.n (n>0)  

#include <iostream>
using namespace std;

int calculator(int nInput);
int calculatorRecursion(int nInput);
long factorialRecursion(long nInput);

int calcSampleAnswer(int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	cout<<calculator(nInput)<<endl;
	cout<<calcSampleAnswer(nInput);
	return 0;
}

long factorialRecursion(long nInput) {
  if (!nInput) {
    return 1;
  }
  return nInput * factorialRecursion(nInput - 1);
}

int calculator(int nInput) {
	int temp(0);
	for (int i=1; i<=nInput; i++) {
		temp+=factorialRecursion(i);
	}
	return temp;
} 


int calculatorRecursion(int nInput) 
{
	if (nInput==1) {
		return 1;
	} 
	return factorialRecursion(nInput)+calculatorRecursion(nInput--);
}

int calcSampleAnswer(int nInput) {
	long sum(0), element(1);
	for (int i = 1; i<=nInput; i++) {
		element*=i;
		sum+=element;

	}
	return sum;
}
