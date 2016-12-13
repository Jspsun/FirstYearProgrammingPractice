#include <iostream>
using namespace std;

int fibonacci(int n) {
  int fibonacciValues[n + 1];

  fibonacciValues[0] = 0;
  fibonacciValues[1] = 1;

  for (int i = 2; i < n + 1; i++) {
    fibonacciValues[i] = fibonacciValues[i - 2] + fibonacciValues[i - 1];
  }
  return fibonacciValues[n];
}

int main() {
  cout << fibonacci(10);
}
