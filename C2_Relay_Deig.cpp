#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, i, j,w;
    char arr[22][22];
    cin>>a>>b;
    
   int movei[]={-1,-1,-1,0,0,1,1,1};
   int movej[]={-1,0,1,-1,1,-1,0,1};
    
    
    for(i=1; i <= a; i++)
        for(j=1; j<= b; j++)
            cin>>arr[i][j];
            
    for(i=1; i <= a; i++)
        for(j=1; j<= b; j++)
           if (arr[i][j]=='X')
                for(w=0; w<8; w++)
            arr[i+movei[w]][j+movej[w]]='#';
        
    for(i=1; i <= a; i++)
    {
        for(j=1; j<= b; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
            

    
    

    return 0;
}

