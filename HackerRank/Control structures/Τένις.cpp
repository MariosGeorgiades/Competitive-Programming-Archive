#include<bits/stdc++.h>
using namespace std;

int main(){
int a, b, cnt=0;
cin >> a >> b;
if(a == 40 && b == 40){
cout << -1;
return 0;
}
else if(a == 0){
cnt+=0;
}
else if(a == 15){
cnt+=1;
}
else if(a == 30){
cnt+=2;
}
else if(a == 40){
cnt+=3;
}
if(b == 0){
cnt+=0;
}
else if(b == 15){
cnt+=1;
}
else if(b == 30){
cnt+=2;
}
else if(b == 40){
cnt+=3;
}
cout << cnt;

return 0;
}
