#include<bits/stdc++.h>
using namespace std;

bool checkForCycle(int s, int parent, vector<int> adj[], vector<bool> &vis){
    vis[s] = true;
    for(auto it : adj[s]){
        if(!vis[it]){
            if(checkForCycle(it,s,adj,vis)) return true;
        }
        else if(parent != it) return true;
    }

    return false;

}

bool isCycle(int V, vector<int> adj[]){
    vector<bool> vis(V+1,false);
    for(int i = 1; i <= V; i++){
        if(!vis[i]){
           if(checkForCycle(i,-1,adj,vis)) return true;
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
