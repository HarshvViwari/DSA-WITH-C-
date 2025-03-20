
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string numStr, strInput;
  string s[10];
  int arr[10], val;

  // Read first line of integers
  getline(cin, numStr);
  
  stringstream ss1(numStr);
  int i = 0;
  while (ss1 >> val) {
    arr[i] = val;
    i++;
  }

  // Read second line of strings
  getline(cin, strInput);
  
  stringstream ss2(strInput);
  i = 0;
  string word;
  while (ss2 >> word) {
    s[i] = word;
    i++;
  }

  // Print the arrays to verify
  cout << "Numbers: ";
  for (int j = 0; j < i; j++) {
    cout << arr[j] << " ";
  }
  cout << endl;

  cout << "Strings: ";
  for (int j = 0; j < i; j++) {
    cout << s[j] << " ";
  }
  cout << endl;

  return 0;
}
