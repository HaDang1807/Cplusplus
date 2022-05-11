/*  string replaceAll(string str, char c1, char c2)
    Returns a string with every c1 replaced with c2
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string replaceAll(string str, char c1, char c2);
string replaceAll(string str, string s1, string s2);

int main() {
  string str = "nannies";
  // str = replaceAll(str, 'n', 'd');
  // cout << str << endl;

  str = replaceAll(str, "na", "do");
  cout << str << endl;
  
  return 0;
}

string replaceAll(string str, char c1, char c2) {
  for (int i = 0, n = str.length(); i < n; i++) {
    if (str[i] == c1) {
      str[i] = c2;
    }
  }

  return str;
}

/* Replaces all instaces of s1 with the replacement s2
   Assumption: s1.length() == s2.length()*/
string replaceAll(string str, string s1, string s2) {
  if (s1.length() > str.length()) {
    return str;
  }

  // for (int i = 0, n = str.length(); i < n; i++) {


    int index = str.find(s1);
      if (index != -1) {
        for (int j = 0, n = s2.length(); j < n; j++) {
          str[index] = s2[j];
          index++;
        }
      }
  // }

  return str;
}
