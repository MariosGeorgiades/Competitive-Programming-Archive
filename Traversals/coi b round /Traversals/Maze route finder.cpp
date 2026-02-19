#include<bits/stdc++.h>
using namespace std;

int visited[105]={};
int graph[105][105]={};
int n, finish;
bool found = false;
vector <int> route;

void dfs(int start){
    visited[start]=1;
    route.push_back(start);
    if(start == finish){
        found = true;
        fill(visited, visited+105, 1);
    }
    for(int i=0; i<n+1; i++)
        if(visited[i]==0 && graph[start][i]!=0)
            dfs(i);
    if(!found)
        route.pop_back();
}

int main(){
    int e, start;
    cin >> n >> e >> start >> finish;
    int a, b;
    for(int i=0; i<e; i++){
        cin >> a >> b;
        graph[a][b]=1;
    }

    dfs(start);
    for(int i=0; i<int(route.size()); i++){
        cout << route[i] << " ";
    }

return 0;
}
