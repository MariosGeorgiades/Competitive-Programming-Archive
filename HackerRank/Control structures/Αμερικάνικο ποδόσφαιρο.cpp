#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int a[2], cnt=0;

for(int i=0; i<2; i++){
cin >> a[i];
}

for(int i=0; i<2; i++){
for(int j=0; j<a[i]/7; j++){
if( ((a[i]-(7*j))%3) == 0){
cnt+=1;
break;
}
}
}
if(cnt==2){
cout << 1;
}
else{
cout << 0;
}

return 0;
}
