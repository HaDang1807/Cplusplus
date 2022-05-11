/* string removeCharacters(string str, string remove)
The program returns a new string consisting of characters in str 
after removing all of the characters in remove */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isRemoved(string remove, char ch);
string removeCharacters(string str, string remove);
void removeCharactersInPlace(string & str, string remove);

int main() {
  cout << "Returns a new string consisting of the characters that is not in remove" << endl;
  string str, remove;

  cout << "Enter a string to remove characters: ";
  getline(cin, str);

  cout << "Enter the remove string: ";
  getline(cin, remove);

  removeCharactersInPlace(str, remove);
  cout << "The string after removing: " << str << endl;

  return 0;
}


/* Return true if a character is contained in the word passed in as a parameter */
bool isRemoved(string remove, char ch) {
  for (int i = 0, n = remove.length(); i < n; i++) {
    if (ch == remove[i]) {
      return true;
    }
  }
  return false;   
}

/* Remove all characters of a string that are identical to characters in remove */
/* Step 1: If str[i] is a character of remove, remove it from the string str
   and not update i (because str is changed, the character right after str[i] which originally is str[i+1]
   now is str[i])
   Step 2: If str[i] is not a character of remove, update i and continue the for loop
*/
string removeCharacters(string str, string remove) {
  for (int i = 0; i < str.length(); i) {
    if (isRemoved(remove, str[i])) {
      str.erase(i, 1);
    } else {
      i++;
    }
  }
  return str;
}

void removeCharactersInPlace(string & str, string remove) {
  for (int i = 0; i < str.length(); i) {
  if (isRemoved(remove, str[i])) {
    str.erase(i, 1);
  } else {
    i++;
  }
  }
}
