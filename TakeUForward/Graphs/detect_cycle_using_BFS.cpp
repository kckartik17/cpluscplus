#include<bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, vector<int> adj[], vector<bool> &vis){
    queue<pair<int,int>> q;
    vis[s] = true;
    q.push({s,-1});

    while(!q.empty()){
        int node = q.front().first;
        int par = q.front().second;
        q.pop();

        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = true;
                q.push({it,node});
            }
            else if(par != it) return true;
        }
    }

    return false;

}

bool isCycle(int V, vector<int> adj[]){
    vector<bool> vis(V+1,false);
    for(int i = 1; i <= V; i++){
        if(!vis[i]){
           if(checkForCycle(i,adj,vis)) return true;
        }
    }

    return false;
}

int main(){
    int N,E;
    cin >> N >> E;
    vector<int> adj[N+1];
    for(int i = 0; i < E; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << isCycle(N,adj);
}
