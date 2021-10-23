//Decimal to Binary converter

#include <bits/stdc++.h>

using namespace std;

string decToBin(int n);

int main() {
	int n;
	cout<<"N ? ";
	cin>>n;
	cout<<decToBin(n);
	return 0;
}

string decToBin(int n) {
	string result="";
	vector <int> remainderContainer;
	while (n!=0) {
		remainderContainer.push_back(n%2);
		n/=2;
	}
	
	for (int i=0; i<remainderContainer.size(); i++) {
		result+=(remainderContainer[i]==1 ? '1':'0');
	}
	return result;
}
