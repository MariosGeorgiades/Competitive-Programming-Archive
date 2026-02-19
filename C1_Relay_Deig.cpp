#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int b, g=0;
    cin>>b;
    string arr[b];
    for(int i = 0; i<b; i++)
        cin>>arr[i];
    for(int i = 0; i<b; i++){
        bool palindrome = true;
        for(int j = 0; j<arr[i].size(); j++){
        if(arr[i][j]!=arr[i][arr[i].size() - 1 - j])
            palindrome = false;   
          
        }
    if(palindrome == true)
         g = g+1;        
    
    }
       cout<<g<<endl;
       return 0;
       }