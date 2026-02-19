#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int h, m, s;
cin >> h >> m >>s;

if (h == 99 && m == 59 && s==59){
s = s-60;
h = h-99;
m = m-59;
}
else if (m==59 && s==59){
m = m-59;
s = s-60;
h = h+1;
}
else if (s==59){
m = m+1;
s = s-60;
}
s = s+1;
cout << h << " " << m<< " " << s;

return 0;
}
