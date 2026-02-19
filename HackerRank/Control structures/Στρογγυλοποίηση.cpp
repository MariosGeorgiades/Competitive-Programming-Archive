#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b;
    cin>>a;
    b= a%100;
    if(b>=50)
        cout<<a-b+100<<endl;
    else
        cout<<a-b<<endl;

    return 0;
}
