#include <iostream>
// #include "cstring.h"
// using namespace sdds;
using namespace std;


  // Compares two C-strings
  int strCmp(const char* s1, const char* s2){
    int i = 0;

    // Iterate through the strings until the end of the string or until a character is different
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]){
      cout << i << endl;
      cout << s1[i] << endl;
      cout << s2[i] << endl;
      i++;
    }

    cout << "after loop" << endl;
    cout << i << endl;
    cout << s1[i] << endl;
    cout << s2[i] << endl;

    // If the strings are the same, return 0, else return the difference between the two characters ascii values
    return s1[i] - s2[i];
  }

int main() {
  
  int i = strCmp("dccc", "dccc");

  cout << i << endl;

  return 0;
}