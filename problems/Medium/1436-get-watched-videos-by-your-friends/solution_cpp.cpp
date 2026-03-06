class Solution {
public:
  
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        int n = watchedVideos.size();
        vector<vector<int>>adj(n);
         
        for(int i=0;i<friends.size();i++)
        {
            int u = i;
            for(int fr=0;fr<friends[i].size();fr++)
            {
                adj[u].push_back(friends[i][fr]);
                
            }

        }
        int le = 0;
        queue<int>qu;
        vector<bool>visit(n, false);
        qu.push(id);
        vector<int>ref;
        visit[id] = true;
        while(!qu.empty())
        {
            
            int si = qu.size();
            for(int t = 0; t<si;t++)
            {
             int node = qu.front();
             qu.pop();
           
            for(auto it : adj[node])
            {
                if(visit[it] == false)
                {
                    visit[it] = true; 
                    if(le == level - 1)
                    {
                       ref.push_back(it);
                    }
                    qu.push(it);
                }
             }
            }
            le++;
            if(le == level)
            {
                break;
            }
        }

        map<string,int>mp;

        for(auto it : ref)
        {
            cout << it << "**";
            cout << watchedVideos[it].size();
             for(int te =0;te<watchedVideos[it].size();te++)
             {
                string ch = watchedVideos[it][te];
                cout << watchedVideos[it][te] << "\n";
                mp[ch]++;
             }
        }
        
        vector<pair<string,int>> temp(mp.begin(), mp.end());

sort(temp.begin(), temp.end(), [](auto &a, auto &b) {
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
});

vector<string> ans;
for(auto &it : temp)
{
    ans.push_back(it.first);
        
        
        }
        

        return ans;
    }
};