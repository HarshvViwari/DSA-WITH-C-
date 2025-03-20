#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int decimal;
string str="";
cout << "Enter a decimal number: ";
cin >> decimal;
  
while(decimal >0){
  
int temp = decimal%2;
  
str += (temp + '0');
decimal = decimal /2;
}
  reverse(str.begin(), str.end());
cout << str;
return 0;
}