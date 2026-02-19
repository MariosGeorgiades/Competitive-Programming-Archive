#include<bits/stdc++.h>
using namespace std;

#define INF 1000000
int dist[1000];
set< tuple<int,int,int> > edges;
int n;

void bellman(int st){
    for(int i=1; i<=n; i++)
        dist[i]=INF;
    dist[st]=0;

    for(int i=1; i<=n-1; i++){
        for(auto x: edges){
            int a,b,w;
            tie(a,b,w)=x;
            dist[b]=min(dist[b],dist[a]+w);
        }
    }
}

int main(){
    int e, st;
    cin >> n >> e >> st;//n starting from 0
    int a, b, w;

    for(int i=0; i<e; i++){
        cin >> a >> b >> w;
        edges.insert(make_tuple(a,b,w));
        edges.insert(make_tuple(b,a,w));//remove for directed graph
    }

    bellman(st);

    for(int i=0; i<n; i++)
        cout << "SP("<< st << "," << i << ")=" << dist[i] << endl;

return 0;
}
