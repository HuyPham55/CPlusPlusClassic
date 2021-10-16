//DayOrderCalculator
#include <iostream>
using namespace std;

bool isLeapYear(int nInput);
int daysOfMonth(int nMonth, int nYear);
bool isValidDate(int nDate, int nMonth, int nYear);
int dayOrderCalculator(int nDate, int nMonth, int nYear);

int main() {
	int nDate, nMonth, nYear;
	cout<<"Date?";
	cin>>nDate;
	cout<<"Month?";
	cin>>nMonth;
	cout<<"Year?";
	cin>>nYear;
	int temp = dayOrderCalculator(nDate, nMonth, nYear);
	if (temp==0) {
		cout<<"Invalid date!";
	} else {
		cout<<temp;
	}

}


bool isLeapYear(int nInput) {
	if ((!(nInput % 4) && nInput % 100) || !(nInput % 400)) 
	{
	  return true;
	}
	return false;
}

int daysOfMonth(int nMonth, int nYear) {
	switch (nMonth) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: return 31; break;
		
		case 4:
		case 6:
		case 9:
		case 11: return 30; break;
		case 2: if (isLeapYear(nYear)) { return 29;} return 28; break;
	}
}

bool isValidDate(int nDate, int nMonth, int nYear) {
	if (nDate>0 && nDate<=daysOfMonth(nMonth, nYear)) {
		return true;
	}
	return false;
}

int dayOrderCalculator(int nDate, int nMonth, int nYear) {
	if (isValidDate(nDate, nMonth, nYear)) {
		int order;
		for (int i=1; i<nMonth; i++) {
			order+=daysOfMonth(i, nYear);
		}
		order+=nDate;		
		return order;		
	} else {
		return 0;
	}
}
