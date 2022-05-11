/* Reads a word and returns its ponts in Scrabble */

#include <iostream>
#include <string>
using namespace std;


int letterPoint(char ch);
int wordPoint(string word);

int main() {
  string word;
  int points;
  cout << "This program counts the score of a word in Scrabble" << endl;
  cout << "Enter a word: ";
  cin >> word;
  points = wordPoint(word);
  cout << "The word " << word << " worth " << points << " in Scrabble" << endl;

  return 0;
}

int wordPoint(string word) {
  int points = 0;
  for (int i = 0, n = word.length(); i < n; i++) {
    points += letterPoint(word[i]);
  }
  return points;
}

int letterPoint(char ch) {
  switch(ch) {
    case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
    case 'R': case 'S': case 'T': case 'U':
    return 1;

    case 'D': case 'G':
    return 2;

    case 'B': case 'C': case 'M': case 'P':
    return 3;

    case 'F': case 'H': case 'V': case 'W': case 'Y':
    return 4;

    case 'K':
    return 5;

    case 'J': case 'X':
    return 8;

    case 'Q': case 'Z':
    return 10;

    default:
    return 0;
  }
}
