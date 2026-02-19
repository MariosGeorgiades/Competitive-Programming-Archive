#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int y;
cin >> y;
int r1, r2, r3, r4, r5, a, b, c;
r1= y%19;
r2= y%4;
r3= y%7;
a= 19*r1 + 16;
r4= a%30;
b= 2*r2 + 4*r3 + 6*r4;
r5= b%7;
c= r4 + r5;
cout << 3+c << "/" << 4 << "/" << y;

return 0;
}
