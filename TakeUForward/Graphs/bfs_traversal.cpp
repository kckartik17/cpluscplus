#include<bits/stdc++.h>
using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
	vector<int> bfs;
    vector<bool> vis(V+1,false);
        for(int i = 1; i <= V; i++){
            if(!vis[i]){
                queue<int> q;
                q.push(i);
                vis[i] = true;
                
                while(!q.empty()){
                    int node = q.front();
                    q.pop();
                    bfs.push_back(node);
                    
                    for(auto it: adj[node]){
                        if(!vis[it]){
                            q.push(it);
                            vis[it] = true;
                        }
                    }
                }
            }
        }  

        return bfs; 
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

    vector<int> bfs = bfsOfGraph(N,adj);
    for(auto it : bfs){
        cout << it << " ";
    }
}