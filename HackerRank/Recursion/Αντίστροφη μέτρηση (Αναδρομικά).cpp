#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 void print(int start) {
   if(start==0);

     else {
         cout<<start<<" ";
         print(start-1);
     }

 }

int main() {
   int a;
    cin>>a;
   print(a);
    return 0;
}
