#include <iostream>
using namespace std;

int main() {
    int size,target;
    cout << "entre the size of array ";
    cin >> size;
    int array[size];
    for (int i=0; i< size; i++){
        cout << "entre element "<< endl;
        cin >> array[i];
    }
    
    cout << "entre target ";
    cin >> target;
    int a,b;
    for (int i=0; i<size; i++){
        a= array[i];
        for(int j=i+1; j<size; j++){
            b= array[j];
            if (a+b==target){
                cout << "the number is ";
                cout<< a << "  " <<  b<< endl;
                return 0;
            }
            
        }
        
    }
    
    return 0;
}
