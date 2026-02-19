#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
float x, y;
cin >> x >> y;

if(x>0 && y>0){
cout << "Q1";
}//Q1
else if(x<0 && y>0){
cout << "Q2";
}//Q2
else if(x<0 && y<0){
cout << "Q3";
}//Q3
else if(x>0 && y<0){
cout << "Q4";
}//Q4
else if(x==0 && y!=0){
cout << "Y";
}//X
else if(x!=0 && y==0){
cout << "X";
}//Y
else if(x==0 && y==0){
cout << "Start";
}//Start

return 0;
}
