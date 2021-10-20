//32
//https://www.howkteam.vn/course/bai-toan-kinh-dien-trong-lap-trinh/viet-chuong-trinh-khoi-tao-1-mang-n-phan-tu-voi-gia-tri-0-1463
#include <iostream>
using namespace std;
//initialize an array with 0 as default value
#define MAX 10

// khai báo prototype
void xuatMang(int arr[], int n);

int main()
{
	int myArray[MAX] = {}; 

	xuatMang(myArray, MAX);

	return 0;
}

void xuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}
