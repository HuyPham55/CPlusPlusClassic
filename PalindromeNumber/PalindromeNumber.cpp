//Palindrome number check (not string)
//Or also called reverse number problem
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/kiem-tra-so-doi-xung-1279
#include <stdio.h>
#include <iostream>
using namespace std;

int reverseNumber(int nInput) {
	int temp(0);
	for (; nInput != 0;) {
		temp=temp*10+nInput%10;
		nInput/=10;
	}
	return temp;
}

bool PalindromeCheck(int nInput) {
	int temp = reverseNumber(nInput);
	if (temp!=nInput) {
		return false;
	}
	return true;
}

int main() {
	int nInput(0), temp(0);
	cout<<"Enter number: ";
	cin>>nInput;
	if (PalindromeCheck(nInput)) {
		cout<<"Palindrome number";
	} else {
		cout<<"Not a Palindrome number";
	}
	return 0;
}
