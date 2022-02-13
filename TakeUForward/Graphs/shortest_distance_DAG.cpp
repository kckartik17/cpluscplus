#include<bits/stdc++.h>
using namespace std;

void topoDFS(int node, vector<pair<int,int>> adj[], vector<bool> &vis, stack<int> &st){
	vis[node] = true;
	for(auto it : adj[node]){
		if(!vis[it.first]){
			topoDFS(it.first,adj,vis,st);
		}
	}

	st.push(node);
}

void shortestPath(int src, int N, vector<pair<int,int>> adj[]){
	vector<bool> vis(N,false);
	stack<int> st;
	for(int i = 0; i < N; i++){
	    if(!vis[i]){
	        topoDFS(i,adj,vis,st);
	    }
	}

	vector<int> dis(N,1e9);
	dis[src] = 0;
	while(!st.empty()){
		int node = st.top();
		st.pop();
		if(dis[node] != 1e9){
			for(auto it : adj[node]){
				if(dis[node] + it.second < dis[it.first]){
					dis[it.first] = dis[node] + it.second;
				}
			}
		}
	}

	for(int i = 0; i < N; i++){
		(dis[i] == 1e9) ? cout << "INF " : cout << dis[i] << " "; 
	}
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>> adj[n];
	for(int i = 0; i < m; i++){
		int u,v,wt;
		cin >> u >> v >> wt;
		adj[u].push_back({v,wt});
	}

	shortestPath(0,n,adj);

	return 0;
}