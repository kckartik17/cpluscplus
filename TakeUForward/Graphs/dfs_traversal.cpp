#include<bits/stdc++.h>
using namespace std;

void dfsFunc(int node, vector<bool> &vis, vector<int> adj[], vector<int> &dfs){
	dfs.push_back(node);
	vis[node] = true;
	for(auto it : adj[node]){
		if(!vis[it]){
			dfsFunc(it,vis,adj,dfs);
		}
	}
}


vector<int> dfsOfGraph(int V, vector<int> adj[]){
	vector<int> dfs;
	vector<bool> vis(V+1,false);
	for(int i = 1; i <= V; i++){
		if(!vis[i]){
			dfsFunc(i,vis,adj,dfs);
		}
	}

	return dfs;
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

    vector<int> bfs = dfsOfGraph(N,adj);
    for(auto it : bfs){
        cout << it << " ";
    }
}
