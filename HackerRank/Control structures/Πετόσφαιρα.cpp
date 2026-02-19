#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n, r;
cin >> n >> r;

if(r%6 == 0){
cout << n;
}
else if(r%6 == 1){
cout << (n+5)%6;
}
else if(r%6 == 2){
cout << (n+4)%6;
}
else if(r%6 == 3){
cout << (n+3)%6;
}
else if(r%6 == 4){
cout << (n+2)%6;
}
else if(r%6 == 5){
cout << (n+1)%6;
}

return 0;
}
