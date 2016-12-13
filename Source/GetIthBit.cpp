#include <iostream>
using namespace std;

int getBit(int number, int index) {
  return number >> (index - 1) & 1;
}

int main() {
  cout << getBit(1, 2);
}
