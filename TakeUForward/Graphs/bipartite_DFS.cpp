bool bipartiteDFS(int s, vector<int> adj[], vector<int> &color){
        if(color[s] == -1) color[s] = 1;
        for(auto it : adj[s]){
            if(color[it] == -1){
                color[it] = 1 - color[s];
                if(!bipartiteDFS(it,adj,color)) return false;
            }else if(color[it] == color[s]){
                return false;
            }
        }
        
        return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int> color(V,-1);
	    for(int i = 0; i < V; i++){
	        if(color[i] == -1){
	            if(!bipartiteDFS(i,adj,color)) return false;
	        }
	    }
	    
	    return true;
}