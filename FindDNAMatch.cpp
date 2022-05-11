/* The program returns the first position at which strand s1 can attach to strand s2
   Returns -1 if there is no match*/

#include <iostream>
#include <string>
using namespace std;

/* Function prototypes*/
bool isTwoBasesMatch(char ch1, char ch2);
bool isTwoStrandsMatch(string s1, string s2);
int findDNAMatch(string s1, string s2, int start = 0);

int main() {
  string s1 = "TGC";
  string s2 = "TAACGG";

  int posMatch = findDNAMatch(s1, s2);
  cout << posMatch << endl;

  return 0;
}

/* Check if two bases match */
bool isTwoBasesMatch(char ch1, char ch2) {
  if (ch1 == 'A' && ch2 == 'T' || ch1 == 'T' && ch2 == 'A'
      || ch1 == 'G' && ch2 == 'C' || ch1 == 'C' && ch2 == 'G') {
    return true;
  } else {
    return false;
  }
}

/* Check if two DNA strands with the same length match */
bool isTwoStrandsMatch(string s1, string s2) {
  for (int i = 0, n = s1.length(); i < n; i++) {
    if (!isTwoBasesMatch(s1[i], s2[i])) {
      return false;
    }
  }
  return true;
}


/* Assume s1.length() < s2.length() */
int findDNAMatch(string s1, string s2, int start) {
  int s1Length = s1.length();
  int s2Length = s2.length();

  int firstPos = -1; // No two bases matching
  for (int i = 0; i < s2Length; i++) {
    if (isTwoBasesMatch(s1[0], s2[i])) {
      firstPos = i; // The first base in s2 match s1[0]
      if ((i + s1Length) <= s2Length && isTwoStrandsMatch(s1, s2.substr(i, s1Length))) {
        return firstPos;
      }
    }
  }
  return -1;
}
  

