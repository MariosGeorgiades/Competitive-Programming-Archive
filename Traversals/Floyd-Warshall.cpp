#include<bits/stdc++.h>
using namespace std;

int graph[105][105]={};
int n;

void Floyd_Warshall(){
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                graph[i][j]=min(graph[i][j], graph[i][k]+graph[k][j]);
            }
        }
    }
}

int main(){
    int e;
    cin >> n >> e;//n starting from 0
    int a, b, w;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            graph[i][j]=1000000000;
            graph[i][i]=0;
        }
    }

    for(int i=0; i<e; i++){
        cin >> a >> b >> w;
        graph[a][b]=w;
        graph[b][a]=w;//remove for directed graph
    }

    Floyd_Warshall();

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cout << "SP("<< i << "," << j << ")=" << graph[i][j] << endl;

return 0;
}
