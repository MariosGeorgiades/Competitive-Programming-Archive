#include<bits/stdc++.h>
using namespace std;

void read(int arr[], int n){
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
}

int find(int arr[], int n, int x, int a){
    if(a==n && arr[a]!=x){
        return 2;
    }
    else{
        if(arr[a]==x){
            return 1;
        }
        return find(arr, n, x, a+1);
    }
}

int main(){
    int n, x;
    cin >> n;
    int arr[n], a=0;
    read(arr, n);
    cin >> x;
    if(find(arr, n, x, a)==1){
        cout << "found";
    }
    else{
        cout << "not found";
    }

return 0;
}
