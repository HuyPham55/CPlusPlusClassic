//NextAndPreviousDateFinder

#include <iostream>

using namespace std;

bool isLeapYear(int nInput);
int daysOfMonth(int nMonth, int nYear);
bool isValidDate(int nDate, int nMonth, int nYear);
void previousDay(int currentDate, int currentMonth, int currentYear);
void nextDay(int currentDate, int currentMonth, int currentYear);

int main() {
  int currentDate, currentMonth, currentYear;
  cout << "Date?";
  cin >> currentDate;
  cout << "Month?";
  cin >> currentMonth;
  cout << "Year?";
  cin >> currentYear;
  if (isValidDate(currentDate, currentMonth, currentYear)) {
    previousDay(currentDate, currentMonth, currentYear);
	nextDay(currentDate, currentMonth, currentYear);

  } else {
    cout << "The provided date is invalid.";
  }

}

bool isLeapYear(int nInput) {
  if ((!(nInput % 4) && nInput % 100) || !(nInput % 400)) {
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
  case 12:
    return 31;
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    return 30;
    break;
  case 2:
    if (isLeapYear(nYear)) {
      return 29;
    }
    return 28;
    break;
  }
}

bool isValidDate(int nDate, int nMonth, int nYear) {
	if (nMonth>0&&nMonth<=12) {
		 if (nDate > 0 && nDate <= daysOfMonth(nMonth, nYear)) {
    		return true;
  		}
	}
  return false;
}

void previousDay(int currentDate, int currentMonth, int currentYear) {
  int previousDate = currentDate - 1;
  int previousMonth = currentMonth;
  int previousYear = currentYear;

  if (previousDate < 1) {
    previousMonth = currentMonth - 1;
    if (previousMonth < 1) {
      previousYear = currentYear - 1;
      previousMonth = 12;
    }
    previousDate = daysOfMonth(previousMonth, previousYear);
  }
  cout << "Previous day: " << previousDate << "/" << previousMonth << "/" << previousYear<<endl;
}

void nextDay(int currentDate, int currentMonth, int currentYear) {
  int nextDate = currentDate + 1;
  int nextMonth = currentMonth;
  int nextYear = currentYear;

  if (nextDate > daysOfMonth(currentMonth, currentYear)) {
    nextMonth += 1;
    if (nextMonth > 12) {
      nextYear += 1;
      nextMonth = 1;
    }
    nextDate = 1;
  }
  
   cout << "Next day: " << nextDate << "/" << nextMonth << "/" << nextYear<<endl;

}
