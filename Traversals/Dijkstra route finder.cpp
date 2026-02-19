#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
vector<vii> AdjList;
priority_queue< ii, vector<ii>, greater<ii> > pq;
vi dist, route;
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
                route[v.first] = u;
                pq.push(ii(dist[v.first], v.first));
            }
        }
    }
}

void PrintPath(int st, int en){
    if(dist[en] == INF){
        cout << "No path from " << st << " to " << en;
        return;
    }

    vector<int> path;
    for(int i=en; i!=-1; i=route[i]){
        path.push_back(i);
    }
    reverse(path.begin(), path.end());

    cout << "Shortest path from " << st << " to " << en << ": ";
    for(int i=0; i<int(path.size()); i++){
        cout << path[i] << " ";
    }
    cout << endl;

    cout << "Distance: " << dist[en];
}

int main(){
    int n, e, a, b, w, st, en;
    cin >> n >> e >> st >> en;//n starting from 0
    AdjList.assign(n, vii());
    dist.assign(n, INF);
    route.assign(n, -1);

    for(int i=0; i<e; i++){
    cin >> a >> b >> w;
    AdjList[a].push_back(ii(b, w));
    AdjList[b].push_back(ii(a, w));//remove for directed graph
    }

    dijkstra(st);

    PrintPath(st, en);

return 0;
}
