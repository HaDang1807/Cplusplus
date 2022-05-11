/* This program finds prime numbers and prints them on the screen */
/* An integer greater than 1 is said to be prime if it has no divisors 
other than itself and one */

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num);

int main() {
  for (int i = 1; i <= 100; i++) {
    if (isPrime(i)) {
      cout << i << " ";
    }
  }

  return 0;
}

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  for (int i = 1; i <= num / 2; i++) {
    if ((i != 1) && (num % i == 0)) {
      return false;
    } 
  }
  return true;
}
