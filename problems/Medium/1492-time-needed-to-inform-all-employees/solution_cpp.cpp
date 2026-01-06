class Solution {
public:
    vector<int>adj[100001];
    vector<bool>visited= vector<bool>(100001,false);
    //std::vector<double> dQdt = std::vector<double>(3);
     int dfs(int j,vector<int>&time)
    {
        visited[j]=true;
        int ma=0;
        for(auto i : adj[j])
        {
            if(visited[i]==false)
            {
                ma=max(ma,dfs(i,time));
            }
        }
        return ma+time[j];
    }
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
      
        for(int i=0;i < manager.size(); i++)
        {
            if(manager[i]!=-1)
            {
            adj[manager[i]].push_back(i);
           // adj[i].push_back(manager[i]);
            }
            
        }
         
        return dfs( headID , informTime);
        
        
        
        
    }
    
};
