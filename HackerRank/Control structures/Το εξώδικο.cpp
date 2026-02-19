#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int d1, m1, y1, d2, m2, y2;
cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;

if(d1<=d2 && m1<=m2 && y1<=y2){
cout << 0;
}//ok
else if(m1<m2 && y1<=y2){
cout << 0;
}//ok
else if(y1<y2){
cout << 0;
}//ok
else if(d1>d2 && m1==m2 && y1==y2){
cout << 15*(d1-d2);
}//this month +15 per day
else if(m1>m2 && y1==y2){
cout << 500*(m1-m2);
}//this year + 500 per month
else if(y1>y2){
cout << 10000;
}//next year + 10000
else{
cout << "Error";
}

return 0;
}
