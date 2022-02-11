#include<bits/stdc++.h>
using namespace std;

bool bipartiteBFS(int s, vector<int> adj[], vector<int> &color){
    queue<int> q;
    q.push(s);
    color[s] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        
        for(auto it : adj[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node];
                q.push(it);
            }else if(color[it] == color[node]){
                return false;
            }
        }
    }
    
    return true;
}
bool isBipartite(int V, vector<int>adj[]){
    vector<int> color(V,-1);
    for(int i = 0; i < V; i++){
        if(color[i] == -1){
            if(!bipartiteBFS(i,adj,color)) return false;
        }
    }
        
    return true;
}