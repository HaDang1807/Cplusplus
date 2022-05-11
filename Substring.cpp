/* Implement free function substr(str, pos, n) */

#include <iostream>
#include <string>
using namespace std;

/* Function prototype */
void error(string msg);
string substring(string str, int pos);
string substring(string str, int pos, int n);


int main() {
  string string, substr;
  int pos, n;
  cout << "Enter a string: ";
  getline(cin, string);

  cout << "Enter the starting postion: ";
  cin >> pos;

  // cout << "Enter the number of characters: ";
  // cin >> n;

  substr = substring(string, pos, n);
  cout << "The substring is: " << substr << endl;
 
  return 0;
}

/* Return a substring of the given string */
string substring(string str, int pos, int n) {
  string substr = "";
  int strLength = str.length();
  if (pos > strLength) {
    error("The position is out of the range of the given string");
  }
  if (pos + n > strLength) {
    return substring(str, pos);
  }

  for (int i = pos; i < (pos + n); i++) {
    substr += str[i];
  }
  return substr;
}

string substring(string str, int pos) {
  string substr = "";
  int strLength = str.length();
  if (pos > strLength) {
    error("The position is out of the range of the given string");
  }

  for (int i = pos; i < strLength; i++) {
    substr += str[i];
  }
  return substr;
}

/* Report error */
void error(string msg) {
  cerr << msg << endl;
  exit(EXIT_FAILURE);
}
