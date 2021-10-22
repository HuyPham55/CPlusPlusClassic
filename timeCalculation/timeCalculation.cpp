//cho-mot-so-nguyen-s-bieu-thi-cho-so-giay-djoi-s-sang-dang-hoursminutesseconds-moi-thanh-phan-la-mot-so-nguyen-co-2-chu-so-vi-du-022011
//voi-s-1-djau-ra-la-timecalculations-000001
//Input: 7200
//Output: 02:00:00
//https://codelearn.io/training/detail/6342

#include <bits/stdc++.h>

using namespace std;

string displayFormatter(int nInput) {
  if (nInput >= 10) {
    return to_string(nInput);
  } else {
    return '0' + to_string(nInput);
  }
}

string timeCalculation(int s) {
  int h = s / 3600;
  int m = (s / 60) % 60;
  s = s % 60;
  return displayFormatter(h) + ':' + displayFormatter(m) + ':' + displayFormatter(s);
}

int main() {
  int i;
  cin >> i;
  cout << timeCalculation(i);
  return 0;
}


