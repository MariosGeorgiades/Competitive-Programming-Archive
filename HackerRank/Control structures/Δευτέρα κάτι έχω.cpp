include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int m, d;
cin >> m >> d;
if(d==1){
if(m==0){
cout << 7;
}
else{
cout << m;
}
}
else if(m+d%7-1<=7){
if(m+d%7-1 == 0){
cout << 7;
}
else{
cout << m+d%7-1;
}
}
else if(m+d%7-1>7){
if(m+d%7-8 == 0){
cout << 7;
}
else{
cout << m+d%7-8;
}
}


return 0;
}
