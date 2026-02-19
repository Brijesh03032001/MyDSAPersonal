class Tuple {
    public:
    TreeNode* node;
    int row;
    int col;
    
    Tuple(TreeNode* n, int r, int c) : node(n), row(r), col(c) {
        
    }
};


class Solution {
public:
  
    vector<vector<int>> vt(TreeNode* root)
    {
      vector<vector<int>>ans;
      if(root==NULL)
      {
        return ans;
      }
      map<int,map<int,multiset<int>>>mp;
      queue<pair<TreeNode*,pair<int,int>>>qu;
      qu.push({root,{0,0}});
      while(!qu.empty())
      {
        auto i = qu.front();
        qu.pop();
        TreeNode* t= i.first;
        int r= i.second.first;
          int c= i.second.second;
        mp[c][r].insert(t->val);
        if(t->left)
        {
          qu.push({t->left,{r+1,c-1}});
        }
        if(t->right)
        {
          qu.push({t->right,{r+1,c+1}});
        }
        
      }
      //vector<vector<int>> ans;
      for(auto p: mp)
      {
        vector<int>tem;
        for(auto q: p.second)
        {
          tem.insert(tem.end(), q.second.begin(),q.second.end());
        }
        ans.push_back(tem);
      }
      return ans;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;
        return vt(root);
        if (!root)  return res;
        
        list<Tuple> q;
        int col = 0;
        map<int, vector<pair<int,int>>> m;
        
        q.push_back(Tuple(root,0,0));
        while(!q.empty()) {
            auto p = q.front();
            TreeNode* temp = p.node;
            int c = p.col;
            int r = p.row;
            q.pop_front();
            
            //left child
            if (temp->left) {
                q.push_back(Tuple(temp->left, r+1, c-1));
            }
            
            //right child
            if (temp->right) {
                q.push_back(Tuple(temp->right, r+1, c+1));
            }
            //put in map
            m[c].push_back({r, temp->val});
        }
        
        
        for (auto e : m) {
            vector<pair<int,int>> temp = e.second;
            sort(temp.begin(), temp.end());
            vector<int> t;
            for (auto v : temp) {
                t.push_back(v.second);
            }
            res.push_back(t);
        }
        
        return res;
    }
};