#include <bits/stdc++.h>
using namespace std;
const int lim=50;
int n, m; 
int graph[lim][lim];
bool visited[lim];

void dfs(int v){
    visited[v] = true;
    for(int v2=0; v2 < n; ++v2){
        if(graph[v][v2] == false || visited[v2] == true){
            continue;
        }
        dfs(v2);
    }
}


int main(){
    cin >> n >> m;

    int a[m], b[m];

    for(int i=0; i<m; ++i){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    
    int ans = 0;

    for(int i=0; i<m; ++i){
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = false;

        for(int j=0; j<n; j++)visited[j] = false;

        dfs(0);
        bool bridge = false;
        for(int j=0; j<n; j++) if(visited[j] == false) bridge=true;

        if(bridge) ans += 1; 
        graph[a[i]][b[i]] = graph[b[i]][a[i]] = true;
    }
    cout << ans << endl;
    return 0;
}
