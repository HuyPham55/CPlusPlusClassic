//arrayMaxConsecutiveSum
//Calc the max sum of k consecutive elements in an array/vector
//https://codelearn.io/training/detail/3621
//Input: inputArray = [2, 3, 5, 1, 6], k = 2
//Ouput: 8 //3+5 = 8
#include <bits/stdc++.h>
using namespace std;

int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k)
{
    long max=0;
    for (int i=0; i<inputArray.size()-k+1; i++) {
        long temp(0); 
        for (int j=i; j<i+k; j++) {
            temp+=inputArray.at(j);
        }
        if (temp>max) max=temp;
    }
    return max;
}

int main() {
	vector <int> arr;
	cout<<"Number or element? : ";
	int n;
	cin>>n;
	for (int i=0; i<n; i++) {
		cout<<"Element "<<i+1<<" : ";
		int temp;
		cin>>temp;
		arr.push_back(temp);
	}
	int k;
	cout<<"k = ? :";
	cin>>k;
	cout<<arrayMaxConsecutiveSum(arr, k);
	
	return 0;
}

