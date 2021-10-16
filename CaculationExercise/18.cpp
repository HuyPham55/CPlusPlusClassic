//18 S(n) = 1+3+5+. . .+(2n+1) 
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tinh-sn-135n2n1-1449
#include <iostream>
using namespace std;

int calculator(int nInput);
int calculatorRecursion(int nInput);
int caclatorExample (int nInput);

int main() {
	int nInput;
	cout<<"N? ";
	cin>>nInput;
	cout<<calculatorRecursion(nInput*2+1)<<endl;// True, but does not met the requirement
											// has to pass modified input
											
	cout<<caclatorExample(nInput); //sample answer										
}

int calculator(int nInput) {
	int temp(0);
	for (int i=1; i<=nInput; i+=2) {
		temp+=i;
	}
	return temp;
} 

int calculatorRecursion(int nInput) 
{
	if (nInput==1) {  
		return 1;
	} else {
		return (nInput)+calculatorRecursion(nInput-2);
	}
}


int caclatorExample (int nInput)
{
  int sum (0);
  for (int i=0; i<=nInput; i++){
 
      sum+=2*i+1;
  }
 return sum;
}
