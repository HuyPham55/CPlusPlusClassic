//maxSubarray
//https://codelearn.io/training/detail/4538
//https://lhchuong.wordpress.com/2015/04/15/thuat-toan-kadane-tim-tap-hop-con-co-tong-lon-nhat/
/*
A contiguous subarray of array A is a subset of array A consecutive elements.

Given an array of integers inputArray, find the contiguous subarray which has the maximum sum. Return that sum.
*/

/*
For inputArray = [-1, 7, -2, 3, 4, 0, 1, -1], the output should be maxSubarray(inputArray) = 13.
It is the sum of the subarray [7, -2, 3, 4, 0, 1] and no other contiguous subarray has a larger sum.
*/

//Hint: To solve this problem, Kadane's algorithm should be used.

#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector <int> arr);
void input(vector <int> &arr);


int main() {
	int n;
	cout<<"N = ?\t";
	cin>>n;
	vector <int> arr(n);
	input(arr);
	cout<<maxSubArray(arr);
	return 0;
}


void input(vector <int> &arr) {
	for (int i=0; i<arr.size(); i++) {
		cout<<"Element "<<i+1<<" : ? ";
		cin>>arr[i];
	}
	return;
}

int maxSubArray(vector <int> arr) {
	//Kadane's algorithm
	int tempSum(0), resultSum(0);
	
	for (int i=0; i<arr.size(); i++) {
		 tempSum=max(arr[i], tempSum+arr[i]);
		 resultSum=max(tempSum, resultSum);
	}
	
	return resultSum;
}




