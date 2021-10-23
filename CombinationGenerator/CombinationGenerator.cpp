//Combination Generator

//Input: n, k

//Ouput: Generate all combination of k elements that range from [1, n]


/*

n=5, k=3

Ouput:
1.{1, 2, 3} 2.{1, 2, 4} 3.{1, 2, 5} 4.{1, 3, 4} 5.{1, 3, 5}
6.{1, 4, 5} 7.{2, 3, 4} 8.{2, 3, 5} 9.{2, 4, 5} 10.{3, 4, 5}
*/

//https://v1study.com/giai-thuat-va-lap-trinh-phuong-phap-sinh-generation.html
#include <bits/stdc++.h>
using namespace std;

void combinationGenerator(int n, int k);

//Utility function
void print(vector <int> arr);

int main() {
	int n,k;
	cout<<"N? K?"<<endl;
	cin>>n>>k;
	if (k>n) {
		cout<<"Wrong input";
		return 0;
	}
	combinationGenerator(n,k);
	return 0;
}


void combinationGenerator(int n, int k) {
	vector <int> arr(n);
	for (int i = 0; i < n; i++)
    {
    	arr[i] = i + 1;
    }
    cout<<"Original set: \n";
    print(arr);
    //core
    vector <int> temp; //index array
    for (int i=0; i<k; i++) {
    	temp.push_back(i);
	}
	cout<<"Initial index array: ";
	print(temp);
	cout<<"Generated sets: \n";
	int i;
	do {
		vector <int> result; //temporary result array
		for (i=0; i<k; i++) {
			result.push_back(arr[temp[i]]);
		} //initial combination


		print(result);
		int i=k-1;
		while (i>=0 && temp[i]==n-k+i) {
			i-=1;
		}
		if (i>=0) { //not final combination
			temp[i]+=1;
		}

		//set vector of index value to its lower limit values
		for (int j=i+1; j<i+k; j++) {
			temp[j]=temp[j-1]+1;
		}
	} while (!(i==0));
	


    //end core
}


void print(vector <int> arr) {
    cout<<"{";
    for (int i=0; i<arr.size(); i++) {
    	if (i!=arr.size()-1){
    		cout<<arr[i]<<", ";
		}
		else {
			cout<<arr[i]<<"} \n";
		}
    }
    
}



