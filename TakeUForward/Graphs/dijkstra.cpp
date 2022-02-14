#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,source;
    cin >> n >> m;
    vector<pair<int,int>> adj[n + 1];
    int a,b,wt;
    for(int i = 0; i < m; i++){
        cin >> a >> b >> wt;
        adj[a].push_back(make_pair(b,wt));
        adj[b].push_back(make_pair(a,wt));
    }

    cin >> source;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dis(n + 1, INT_MAX);
    dis[source] = 0;
    pq.push(make_pair(0,source));
    while(!pq.empty()){
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();
        for(auto it : adj[prev]){
            int next = it.first;
            int nextDist = it.second;
            if(dis[next] > dist + nextDist){
                dis[next] = dis[prev] + nextDist;
                pq.push(make_pair(dis[next],next));
            }
        }
    }

    cout << "The distances from source, " << source << ", are: \n";
    for(auto it : dis) cout << it << " ";
    cout << "\n";
    return 0;
}