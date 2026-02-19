#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    float x1, y1, x2, y2, d;
    cin>>x1>>y1>>x2>>y2;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);

    cout<<fixed<<setprecision(2)<<d<<endl;

    return 0;
}

