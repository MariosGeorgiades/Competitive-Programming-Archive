#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
        cin>>a;
    int ek=a%10;
    int dek=a/10%10;
    int mon=a/10/10;
    if(ek==dek)
        cout<<ek<<endl;
    else if(dek==mon)
        cout<<dek<<endl;
    else if(ek==mon)
        cout<<ek<<endl;
    else cout<<"valid number"<<endl;

    return 0;
}
