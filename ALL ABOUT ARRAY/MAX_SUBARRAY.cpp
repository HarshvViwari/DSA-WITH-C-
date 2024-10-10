#include "iostream"
using namespace std;
int main(){

  int size;
  cout<<"entre size of array " <<endl;
  cin >> size;
  
  int array[size];
  for (int i=0; i<size; i++){
    cout << "entre  element : " << endl;
    cin >> array[i];
  }
  int sub;
  sub = (size*(size+1))/2;
  cout << "the total number of sub array of the array is : " << sub << endl;
  int start,end;

  for (start=0; start< size; start++){
    for (end = start; end <size; end++){
      for(int i=start; i<=end; i++){
        cout << array[i] << " ";
      }
      cout << " ";
    }
    cout << endl;
  }

  

  return 0;
}
