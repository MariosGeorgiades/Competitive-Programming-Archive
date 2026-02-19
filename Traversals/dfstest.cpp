#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n , e;
int vis[101];
vector<int>  al [100];

void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";
    for(int i=0; i<(int)al[node].size(); i++){
        int next= al[node][i];
        if(!vis[next])
            dfs(next);
    }
}

int main() {
    cin>>n>>e;
    for(int i=0; i<e; i++){
        int x, y;
        cin>>x>>y;
        al[x].push_back(y);


    }
    dfs(1);


    return 0;
}
