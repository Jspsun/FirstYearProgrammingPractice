#include <iostream>
using namespace std;

int GCD(int first, int second) {
  if (second == 0) {
    return first;
  }
  return GCD(second, first % second);
}

int main() {
  cout << GCD(18, 2);
}
