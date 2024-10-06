#include <iostream>
#include <vector>

using namespace std;

int main() {
  int size;
  vector<int> vec;

  cout << "Enter the size of the vector: ";
  cin >> size;
  for (int i = 0; i < size; i++) {
    int j;
    cout << "entre elements : ";
    cin >> j;
    vec.push_back(j);
  }
  for (int val : vec) {
    cout << val << endl;
  }
  int value;
  for (int val : vec) {
    value = value ^ val;
  }
  cout << value;

  return 0;
}