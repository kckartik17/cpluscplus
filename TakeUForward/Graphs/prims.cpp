#include<bits/stdc++.h>
using namespace std;

//Brute Force O(N ^ 2)

// int main(){
// 	int N,m;
// 	cin >> N >> m;
// 	vector<pair<int,int>> adj[N];
// 	int a,b,wt;
// 	for(int i = 0; i < m; i++){
// 		cin >> a >> b >> wt;
// 		adj[a].push_back(make_pair(b,wt));
// 		adj[b].push_back(make_pair(a,wt));
// 	}

// 	int parent[N];
// 	int key[N];
// 	bool mstSet[N];

// 	for(int i = 0; i < N; i++){
// 		key[i] = INT_MAX;
// 		mstSet[i] = false;
// 		parent[i] = -1;
// 	}

// 	key[0] = 0;
// 	parent[0] = -1;

// 	for(int count = 0; count < N - 1; count++){
// 		int mini = INT_MAX, u;
// 		for(int v = 0; v < N; v++){
// 			if(mstSet[u] == false && key[v] < mini){
// 				mini = key[v];
// 				u = v;
// 			}
// 		}
// 		mstSet[u] = true;
// 		for(auto it : adj[u]){
// 			int v = it.first;
// 			int weight = it.second;
// 			if(mstSet[v] == false && weight < key[v]){
// 				parent[v] = u;
// 				key[v] = weight;
// 			}
// 		}
// 	}

// 	for(int i = 1; i < N; i++){
// 		cout << parent[i] << " - " << i << "\n";
// 	}

// 	return 0;
// }

//Efficient O(N logN)
int main(){
	int N,m;
	cin >> N >> m;
	vector<pair<int,int>> adj[N];
	int a,b,wt;
	for(int i = 0; i < m; i++){
		cin >> a >> b >> wt;
		adj[a].push_back(make_pair(b,wt));
		adj[b].push_back(make_pair(a,wt));
	}

	int parent[N];
	int key[N];
	bool mstSet[N];

	for(int i = 0; i < N; i++){
		key[i] = INT_MAX;
		mstSet[i] = false;
	}

	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;


	key[0] = 0;
	parent[0] = -1;
	pq.push(make_pair(0,0));

	for(int count = 0; count < N - 1; count++){
		int u = pq.top().second;
		pq.pop();
		mstSet[u] = true;
		for(auto it : adj[u]){
			int v = it.first;
			int weight = it.second;
			if(mstSet[v] == false && weight < key[v]){
				parent[v] = u;
				pq.push(make_pair(key[v],v));
				key[v] = weight;
			}
		}
	}

	for(int i = 1; i < N; i++){
		cout << parent[i] << " - " << i << "\n";
	}

	return 0;
}