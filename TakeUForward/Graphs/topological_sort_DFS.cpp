class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void topoDFS(int node, vector<int> adj[], vector<bool> &vis, stack<int> &st){
	    vis[node] = true;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            topoDFS(it,adj,vis,st);
	        }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<bool> vis(V,false);
	    stack<int> st;
	    for(int i = 0; i < V; i++){
	        if(!vis[i]){
	            topoDFS(i,adj,vis,st);
	        }
	    }
	    vector<int> result;
	    while(!st.empty()){
	        result.push_back(st.top());
	        st.pop();
	    }
	    
	    return result;
	}
};