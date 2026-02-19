#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
float euro;
int cnt=0;
cin >> euro;
euro+=0.001;
cnt+=euro;
cout << fixed << setprecision(2) << euro-cnt;

return 0;
}
