//uniqueNumber
//https://codelearn.io/training/detail/26770
//cho-mot-mang-cac-so-nguyen-trong-do-moi-so-xuat-hien-hai-lan-tru-mot-so-cac-phep-cua-ban-la-tim-phan-tu-duy-nhat-do
//Complexity: O(n) (time), O(1) space
//Input: 45, 90, 45, 90, 26, 38, 49, 26, 38
//Output: 49


#include <bits/stdc++.h>
using namespace std;
int uniqueNumber(std::vector < int > arr) {
  for (int i = 1; i < arr.size(); i++) {
    arr[0] ^= arr[i];
  }
  return arr[0];
}

int uniqueNumberClassic(std::vector < int > arr) {
  int n = arr.size();
  sort(arr.begin(), arr.end());
  for (int i = 0; i < n; i += 2) {
    if (arr[i] != arr[i + 1])
      return arr[i];
  }
  return arr[n - 1];

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
	
	cout<<"The element that appears once: "<<uniqueNumber(arr);
	return 0;	
}
