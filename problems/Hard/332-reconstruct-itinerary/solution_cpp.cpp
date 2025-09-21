class Solution {
    // Depth-first search function to find the itinerary
    void dfs(unordered_map<string, multiset<string>>& adj, vector<string>& result, string s){
       
        while(adj[s].size()){
         
            string v = *(adj[s].begin());
          
            adj[s].erase(adj[s].begin());
            
            dfs(adj, result, v);
        }
        // Add the current airport to the result
        result.push_back(s);
    }
public:
    
    vector<string> findItinerary(vector<vector<string>>& tickets) {
     
        unordered_map<string, multiset<string>> adj;
        for(vector<string>& t: tickets)
            // Add each destination to the multiset connected to its source airport
            adj[t[0]].insert(t[1]);
        
        // Initialize the result vector
        vector<string> result;
        // Start the depth-first search from JFK (John F. Kennedy International Airport)
        dfs(adj, result, "JFK");
        // Reverse the result to get the correct itinerary
        reverse(result.begin(), result.end());
        // Return the itinerary
        return result;
    }
};