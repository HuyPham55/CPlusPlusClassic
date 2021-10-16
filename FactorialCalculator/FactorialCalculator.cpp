#include <iostream>

using namespace std;

long factorial(int nInput) {
  long temp(1);
  for (long i = 1; i <= nInput; i++) {
    temp *= i;
  }
  return temp;
}

long factorialRecursion(long nInput) {
  if (!nInput) {
    return 1;
  }
  return nInput * factorialRecursion(nInput - 1);
}

int main() {
  long nInput(5);
  //	cout<<factorial(nInput);
  cout << factorialRecursion(nInput);
}
