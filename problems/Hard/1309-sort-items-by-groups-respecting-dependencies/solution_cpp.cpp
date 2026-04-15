class Solution {
public:
    vector<int> toposort(vector<vector<int>>Adj, vector<int>Indegree)
    {
        queue<int> qu;
        vector<int> re;
        for(int i=0;i<Indegree.size();i++)
        {
            if(Indegree[i] == 0)
            {
                qu.push(i);
            }
        }

        while(!qu.empty())
        {
            int top = qu.front();
            qu.pop();
            re.push_back(top);
           
            for(auto it : Adj[top])
            {
              Indegree[it]--;
                if(Indegree[it] == 0)
                {
                    qu.push(it);
                }
            } 
        }

        if(Indegree.size() == re.size())
        {
            return re;
        }
        
        return vector<int>();
    }
    vector<int> sortItems(int n, int m, vector<int>& group, vector<vector<int>>& beforeItems) {

    //total groups
    for(int i=0;i<n;i++)
    {
       if(group[i] == -1)
       {
         group[i] = m++;
       }
    }
    //make itemGraph as well as itemindree
    vector<vector<int>>ItemAdj(n);
    vector<int>ItemIndegree(n,0);
    for(int i=0;i<n;i++)
    {
        for(auto prev : beforeItems[i])
        {
            ItemAdj[prev].push_back(i);
            ItemIndegree[i]++;
        }
    }
    
    //make groupGraph as well as groupIndegree
    vector<vector<int>>GroupAdj(m);
    vector<int>GroupInDegree(m,0);
    for(int i=0;i<n;i++)
    {
        int groupOfI = group[i];
        for(auto prev : beforeItems[i])
        {
            int groupOfprev = group[prev];
            if(groupOfI != groupOfprev)
            {
                 GroupAdj[groupOfprev].push_back(groupOfI);
                 GroupInDegree[groupOfI]++;
            }  
        }
    }
    // retrieve the itemSOrt as well as groupSort
    vector<int> itemSort = toposort(ItemAdj, ItemIndegree);
    vector<int> groupSort = toposort(GroupAdj ,GroupInDegree);

    

  vector<vector<int>>InsideGroupItemArrange(m);
  for(int it : itemSort)
  {
       int groupOfItem = group[it];
       InsideGroupItemArrange[groupOfItem].push_back(it);
  }
  vector<int>result;
  for(int grp : groupSort)
  {
       int si = InsideGroupItemArrange[grp].size();
       for(int j=0;j<si;j++)
       {
        result.push_back(InsideGroupItemArrange[grp][j]);
       }
  }

  return result;
    }
};