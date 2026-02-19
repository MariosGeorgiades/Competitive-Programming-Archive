#include<bits/stdc++.h>
using namespace std;

int main(){
int a, b;
cin >> a >> b;

if(a>=b){
if(100-a+b >= a-b){
cout << a-b;
}
else if(100-a+b < a-b){
cout << 100-a+b;
}
}
else if(a<b){
if(100-b+a > b-a){
cout << b-a;
}
else if(100-b+a < b-a){
cout << 100-b+a;
}
}

return 0;
}
