/*https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/tong-cac-chu-so-cua-so-nguyen-1278 */
#include <iostream>
using namespace std;

int usingForLoop(int nInput) {
	int nRem, nSum(0);
	for (; nInput !=0; ) {
		nRem = nInput %10;
		nSum += nRem;
		nInput /= 10;
	}	
	return nSum;
}

int main() {
	int n;
	cout << "Insert an integer number: ";
	cin >> n;
	int sum(0);
	//This also works well
//	while (n !=0)
//	{
//		sum += n % 10;
//		n /= 10;
//	}

	sum = usingForLoop(1234);
	cout << "Sum= " << sum << endl;
	system("pause");
	return 0;
}


