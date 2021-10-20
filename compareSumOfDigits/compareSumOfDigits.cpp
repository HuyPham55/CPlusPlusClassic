//compareSumOfDigits
//https://codelearn.io/training/detail/34621
//tim-hieu-cua-tong-cac-chu-so-le-voi-tong-cac-chu-so-chan

#include <bits/stdc++.h>
using namespace std;

int compareSumOfDigits(string input);

int main() {
	string input;
	cout<<"Input string: ";
	cin>>input;
	cout<<compareSumOfDigits(input);
	return 0 ;
}

int compareSumOfDigits(string input)
{
 int sum(0);
    for (int i=0; i<input.length(); i++) {
        int temp=(int)input[i]-48;
        if (temp&1) {
            sum+=temp;
        } else {
            sum-=temp;
        }
    }
    return sum;
}
