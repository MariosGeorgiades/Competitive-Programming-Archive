#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int a = 10 ;
    string arr[10], x;
   
 
    for (int i=0; i<a; i++)
         cin >> arr[i];
    
    
    cin >> x;
    bool found= false;
    
    for (int i=0; i<a; i++)
        if (arr[i] == x)
            found= true;
    if (found==true)
        cout << "30" << endl;
    else
        cout << "60" << endl;
    
    
    return 0;
}
