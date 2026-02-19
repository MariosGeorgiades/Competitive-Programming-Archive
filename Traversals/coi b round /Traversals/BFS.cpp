#include<bits/stdc++.h>
using namespace std;

queue <int> path;
int visited[105]={};
int graph[105][105]={};
int n;

void bfs(int start){
    int node;
    path.push(start);
    while(!path.empty()){
        node=path.front();
        path.pop();
        cout << node << " ";
        for(int i=0; i<=n; i++){
            if(visited[i]==0 && graph[node][i]==1){
                visited[i]=1;
                path.push(i);
            }
        }
    }
}

int main(){
    int e;
    cin >> n >> e;
    int a, b;
    for(int i=0; i<e; i++){
        cin >> a >> b;
        graph[a][b]=1;
    }
    bfs(1);

return 0;
}
