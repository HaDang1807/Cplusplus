/* This program returns a string with the initial character capitalized (if it is a letter)
And all other letters are lowercase */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string capitalize(string str);

int main() {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  str = capitalize(str);
  
  cout << "The string afer: " << str << endl;
  return 0;
}

string capitalize(string str) {
  if (isalpha(str[0]) && islower(str[0])) {
    str[0] = toupper(str[0]);
  }
  for (int i = 1, n = str.length(); i < n; i++) {
    if (isalpha(str[i]) && isupper(str[i])) {
      str[i] = tolower(str[i]);
    }
  }
  return str;
}

