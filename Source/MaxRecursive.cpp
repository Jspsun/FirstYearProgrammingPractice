#include <iostream>
using namespace std;


int getMaxHelper(int array[], int largest, int index) {
  if (index == -1) {
    return largest;
  }

  if (array[index] > largest) {
    largest = array[index];
  }
  index--;
  return getMaxHelper(array, largest, index);
}

int getMax(int array[]) {
  int largest = -99999999;
  int index   = sizeof(array) / sizeof(array[0]);

  return getMaxHelper(array, largest, index);
}

int main() {
  int a[] = { 1, 4, 2, 3 };

  cout << getMax(a);
}
