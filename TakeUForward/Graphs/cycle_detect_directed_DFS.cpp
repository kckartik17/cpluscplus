#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkCycle(int node, vector<int> adj[], vector<bool> &vis1, vector<bool> &vis2){
        vis1[node] = true;
        vis2[node] = true;
        
        for(auto it : adj[node]){
            if(!vis1[it]){
                if(checkCycle(it,adj,vis1,vis2)) return true;
            }else if(vis2[it]) return true;
        }
        
        vis2[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vis1(V,false), vis2(V,false);
        for(int i = 0; i < V; i++){
            if(!vis1[i]){
                if(checkCycle(i,adj,vis1,vis2)) return true;
            }
        }
        
        return false;
    }
};