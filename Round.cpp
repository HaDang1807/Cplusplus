/* This program rounds a floating-point to the nearest integer */

#include <iostream>
#include <cmath>
using namespace std;

int roundToNearestInt(double x);

const double A_HALF = 0.5;

int main() {
  cout << "This program rounds a floating-point number to its nearest int" << endl;
  double d1;
  cout << "Enter a floating-point number: ";
  cin >> d1;
  d1 = roundToNearestInt(d1);
  cout << "Integer that is nearest to the floating-point number: " << d1 << endl;
  return 0;
}


int roundToNearestInt(double x) {
  if (x == 0) {
    return x;
  } else if (x > 0) {
    if ((trunc(x) + A_HALF) < x) {
      return trunc(x + A_HALF);
    } else {
      return trunc(x);
    }
  } else { // x < 0
    if ((trunc(x) - A_HALF) > x) {
      return trunc(x - A_HALF);
    } else {
      return trunc(x);
    }
  }
}
