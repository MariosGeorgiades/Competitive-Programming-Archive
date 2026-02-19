#include<bits/stdc++.h>
using namespace std;

int gcd(int x, int y, int cnt){
    if(cnt == 1){
        return 1;
    }
    else{
        if(x%cnt==0 && y%cnt==0){
            return cnt;
        }
        else{
            return gcd(x,y,cnt-1);
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    if(a>=b)
        cout << gcd(a,b,b);
    else
        cout << gcd(b,a,a);

return 0;
}
