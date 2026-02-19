#include<iostream>

using namespace std;

int  main()
{
 int arr[1001];
 int a=0;

 do{
    cin>>arr[a];
 }while(arr[a++]!=0);

  int cnt=1;
  int maxx=1;
  for(int i=0; i<a; i++){
    if(arr[i]==arr[i+1]){
        cnt++;
        if(cnt>maxx){
            maxx=cnt;
        }
    }
    else{
        cnt=1;
    }
  }
 cout<<maxx<<endl;

}
