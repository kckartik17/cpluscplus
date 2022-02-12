#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    queue<int> q;
	    vector<int> ind(V,0);
	    vector<int> res;
	    for(int i = 0; i < V; i++){
	        for(auto it : adj[i]){
	            ind[it]++;
	        }
	    }
	    
	    for(int i = 0; i < V; i++){
	        if(ind[i] == 0) q.push(i);
	    }
	    
	    while(!q.empty()){
	        int node = q.front();
	        q.pop();
	        res.push_back(node);
	        for(auto it : adj[node]){
	            ind[it]--;
	            if(ind[it] == 0) q.push(it);
	        }
	    }
	    
	    return res;
	}
};