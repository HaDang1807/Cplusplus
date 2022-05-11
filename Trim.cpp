/* This program removes all whitespace characters from the beginning and end of a string */

#include <string>
#include <iostream>
#include <cctype>
using namespace std;

string trim(string str);

int main() {
  string s1;
  cout << "Enter a string: ";
  getline(cin, s1);
  s1 = trim(s1);
  cout << "String afer being trimmed: " << s1 << endl;
  return 0;
}
 
string trim(string str) {
  int i = 0;
  while (i == 0 && i < str.length()) {
    if (isspace(str[i])) {
      str.erase(0, 1);
    } else {
      i++;
    }
  }

  for (int i = str.length() - 1; i >= 0; i--) {
    if (isspace(str[i])) {
      str.erase(i, 1);
    } else {
      break;
    }
  }
  return str;
}
