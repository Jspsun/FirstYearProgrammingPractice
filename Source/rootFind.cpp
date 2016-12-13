#include <iostream>
#include <math.h>

using namespace std;
float f(float x){
	return (x*x*x - 2.75*x + 1.2);
}

float rootFind(float left, float right, float precision) {
  // error checking
  if (left > right) {
    cerr << "Error: incorrect bounds";
    return 0;
  }
  if(f(left) <= 0 && f(right) <= 0){
	cerr << "Error: Both floats return negative numbers (or 0)";
	return -100000;
  }
  if(f(left) >= 0 && f(right) >= 0){
	cerr << "Error: Both floats return positive numbers (or 0)";
	return -100000;
  }
  
  float mid = (left+right)/2;
  
  // while condition isn't satisfied
  while (fabs(f(mid)) > precision){
  	mid = (left + right)/2;

	// change bounds
    if (f(right) >= 0){
		if(f(mid) >= 0)
			right = mid;
		else
			left = mid;
	}
	else{
		if(f(mid) < 0)
			right = mid;
		else
			left = mid;
	}
  }
  
  return mid;
}

int main(){
	cout << rootFind(-5, 5, 0.0001);
	
	return 0;
}
