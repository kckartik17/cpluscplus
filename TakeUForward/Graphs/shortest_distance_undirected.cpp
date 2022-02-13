#include<bits/stdc++.h>
using namespace std;

vector<int> shortestDistance(vector<int> adj[], int N, int src){
	vector<int> dis(N,INT_MAX);
	queue<int> q;
	dis[src] = 0;
	q.push(src);

	while(!q.empty()){
		int node = q.front();
		q.pop();

		for(auto it : adj[node]){
			if(dis[node] + 1 < dis[it]){
				dis[it] = dis[node] + 1;
				q.push(it);
			}
		}
	}

	return dis;
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

	vector<int> res = shortestDistance(adj,N,0);
	for(auto it : res){
		cout << it << " ";
	}
}