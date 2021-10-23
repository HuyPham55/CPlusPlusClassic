//uniqueDigitNumber
//https://www.javatpoint.com/cpp-int-to-string
//mot-so-la-so-djac-biet-khi-ma-cac-chu-so-trong-no-khong-bi-trung-lap-vi-du-123-3127-4897-la-cac-so-djac-biet
//https://codelearn.io/training/detail/1281251
#include <bits/stdc++.h>
using namespace std;

bool uniqueDigitNumberChecker(long long n);
bool uniqueDigitNumberCheckerSample(long long n);
int main() {
	cout<<"N ? ";
	long long n;
	cin>>n;
	cout<<uniqueDigitNumberChecker(n)<<endl;
	cout<<uniqueDigitNumberCheckerSample(n);
}

bool uniqueDigitNumberChecker(long long n) {
	if (n==0) return true;
    vector <int> digitContainer;
    while (n!=0) {
        int temp=n%10;
        digitContainer.push_back(temp);
        n/=10;
    }

    for (int i=0; i<digitContainer.size()-1; i++) {
        for (int j=i+1; j<digitContainer.size(); j++) {
            if (digitContainer[i]==digitContainer[j]) {
                return false;
            }
        }
    }
    return true;
}

bool uniqueDigitNumberCheckerSample (long long n) {
	string s;
	stringstream stringStream;
	stringStream<<n;
    stringStream>>s;
    set <char> ss;
    for(int i=0; i<s.size(); i++){
        ss.insert(s[i]);
    }
    if(ss.size() == s.size()){
        return true;
    }
    return false;
}


