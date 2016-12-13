#include <iostream>
#include <math.h>

using namespace std;

float rootFind(float left, float right, float precision) {
  // error checking
  if (left > right) {
    cerr << "Error: incorrect bounds";
    return 0;
  }

  // while condition isn't satisfied
  while (fabs(f((left + right) / 2)) > precision) {
    cout << left << ' ' << right << endl;

    // get midpoint
    float mid = (left + right) / 2;

    // change bounds
    if ((f(mid) > 0) && (f(right) > 0)) right = mid;
    else left = mid;
  }
  return (left + right) / 2;
}
