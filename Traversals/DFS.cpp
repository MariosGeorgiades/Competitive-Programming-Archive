#include<bits/stdc++.h>
using namespace std;

int visited[105]={};
int graph[105][105]={};
int n;

void dfs(int start){
    visited[start]=1;
    cout << start << " ";
    for(int i=0; i<n+1; i++)
        if(visited[i]==0 && graph[start][i]!=0)
            dfs(i);
}

int main(){
    int e;
    cin >> n >> e;
    int a, b;
    for(int i=0; i<e; i++){
        cin >> a >> b;
        graph[a][b]=1;
    }
    dfs(1);

return 0;
}
