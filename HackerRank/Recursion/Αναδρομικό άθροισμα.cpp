#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n) {
  if(n==1){
      return n;
  }
    else return n+sum(n-1);
}

int main() {
    int a;
    cin>>a;
    cout<<sum(a)<<endl;
    return 0;
}
