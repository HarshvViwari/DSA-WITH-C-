// HARSHVARDHAN TIWARI
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
   int num,ans =0;
   cin >> num;
   while(num >0){
       ans = ans + num%10;
       num = num/10;
   }
   cout << "its " << ans;
    return 0;
}