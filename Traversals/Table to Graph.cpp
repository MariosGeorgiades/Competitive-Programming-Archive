#include<bits/stdc++.h>
using namespace std;

int visited[905]={};
int graph[905][905]={};
int n;
int st=0, en=0;
bool found = false;

void dfs(int start){
    visited[start]=1;
    if(start==en)
        found = true;
    for(int i=0; i<n+1; i++)
        if(visited[i]==0 && graph[start][i]!=0)
            dfs(i);
}

int main(){
    char startchar='S', endchar='E', pathchar='*';
    int x, y;
    cin >> x >> y;
    n=x*y;
    char arr[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cin >> arr[i][j];
            if(arr[i][j] == startchar){
                st=i*y+j;
                arr[i][j]=pathchar;
            }
            if(arr[i][j] == endchar){
                en=i*y+j;
                arr[i][j]=pathchar;
            }
        }
    }

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(arr[i][j]==pathchar){
                if(i>0 && arr[i-1][j]==pathchar){
                    graph[i*y+j][(i-1)*y+j]=1;
                    graph[(i-1)*y+j][i*y+j]=1;
                }
                if(i<x-1 && arr[i+1][j]==pathchar){
                    graph[i*y+j][(i+1)*y+j]=1;
                    graph[(i+1)*y+j][i*y+j]=1;
                }
                if(j>0 && arr[i][j-1]==pathchar){
                    graph[i*y+j][i*y+j-1]=1;
                    graph[i*y+j-1][i*y+j]=1;
                }
                if(j<y-1 && arr[i][j+1]==pathchar){
                    graph[i*y+j][i*y+j+1]=1;
                    graph[i*y+j+1][i*y+j]=1;
                }
            }
        }
    }

    /*cout << st << " --> " << en << endl << endl << "  ";
    for(int i=0; i<n; i++)
        cout << setw(3) << i;
    cout << endl;
    for(int i=0; i<n; i++){
        cout << setw(2) << i << "  ";
        for(int j=0; j<n; j++){
            cout << graph[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl << endl;*/ //print graph

    dfs(st);
    if(found)
        cout << "Path found";
    else
        cout << "Path not found";

return 0;
}
