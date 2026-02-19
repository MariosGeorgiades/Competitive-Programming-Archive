#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int s;
cin >> s;
cout << "50: " << s/50 << endl;
cout << "20: " << s%50/20 << endl;
cout << "10: " << s%50%20/10 << endl;
cout << "5: " << s%50%20%10/5 << endl;
cout << "2: " << s%50%20%10%5/2 << endl;
cout << "1: " << s%50%20%10%5%2/1 << endl;

return 0;
}
