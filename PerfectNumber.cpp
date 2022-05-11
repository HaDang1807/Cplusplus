/* This program reports the perfect number in a particular range of number */

#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int num);

int main(void) {
  // Prints all the perfect number in the range 1 to 9999
  for (int i = 1; i <= 9999; i++) {
    if (isPerfect(i)) {
      cout << i << endl;
    }
  }
  return 0;
}

bool isPerfect(int num) {
  int divisorSum = 0;
  // Find sum of all divisors of a number other than the number itself
  for (int i = 1; i <= num / 2; i++) {
   if (num % i == 0) {
     divisorSum += i;
   }
  }
  if (num == divisorSum) {
    return true;
  } else {
    return false;
  }

}

