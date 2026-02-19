#include<bits/stdc++.h>
using namespace std;

int lcm(int x, int y, int cnt){
if(cnt%x==0 && cnt%y==0){
return cnt;
}
else{
return lcm(x,y,cnt+1);
}
}

int main(){
int a, b;
cin >> a >> b;
cout << lcm(a,b,a);

return 0;
}
