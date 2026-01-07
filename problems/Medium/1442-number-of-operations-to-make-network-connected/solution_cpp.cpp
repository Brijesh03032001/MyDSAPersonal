class Solution {
public:
    int find(int node, vector<int> &parent){
        if(parent[node] == node) return node;
		// Path compression
        return parent[node] = find(parent[node], parent);
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
      
        //sort(connections.begin(),connections.end());
        if(connections.size() < n-1) return -1;
        int comp = 0;
        vector<int> parent(n);
        vector<int> rank(n);
        for(int i=0; i<n; i++){
            parent[i] = i;
            rank[i] = 0;
        }
        
        for(auto i: connections){
            int p1 = find(i[0], parent);
            int p2 = find(i[1], parent);
            
            if(rank[p1] < rank[p2]){
                parent[p1] = p2;
            }
            else if(rank[p2] < rank[p1]){
                parent[p2] = p1;
            }
            else{
                parent[p2] = p1;
                rank[p1]++;
            }
        }
        
        for(int i=0; i<n; i++){
            cout<<parent[i]<<"**";
            if(parent[i] == i) 
            {
             // cout<<i<<"**";
              comp++;
            }
        }
        
      // set<int>st{parent.begin(),parent.end()};
      
        return comp-1;
    }
};