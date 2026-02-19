#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<vii> AdjList;
priority_queue< ii, vector<ii>, greater<ii> > pq;
vi dist;
#define INF 1000000000

void dijkstra(int s){
    dist[s]=0;
    pq.push(ii(0, s));

    while(!pq.empty()){
    ii front=pq.top();
    pq.pop();
    int w=front.first;
    int u=front.second;
    if(w>dist[u]){
        continue;
    }
    for(int j=0; j<int(AdjList[u].size()); j++){
            ii v=AdjList[u][j];
            if(dist[u]+v.second < dist[v.first]){
                dist[v.first]=dist[u]+v.second;
                pq.push(ii(dist[v.first], v.first));
            }
        }
    }
}

int main(){
    int n, e, a, b, w, st;
    cin >> n >> e >> st;//n starting from 0
    AdjList.assign(n, vii());
    dist.assign(n, INF);

    for(int i=0; i<e; i++){
    cin >> a >> b >> w;
    AdjList[a].push_back(ii(b, w));
    AdjList[b].push_back(ii(a, w));//remove for directed graph
    }

    dijkstra(st);

    for(int i=0; i<n; i++)
        cout << "SP("<< st << "," << i << ")=" << dist[i] << endl;

return 0;
}
