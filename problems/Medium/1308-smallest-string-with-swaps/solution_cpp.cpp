class Solution {
public:
    
    class DSU{
        public:
        
        vector<int> par,size;
        
        DSU(int n){
            par.resize(n);
            size.resize(n);
            
            for(int i=0; i<n; i++){
                par[i]=i;
                size[i]=1;
            }
        }
        
        int find(int x){
            if(x != par[x]) par[x] = find(par[x]);
            
            return par[x];
        }
        
        bool merge(int x, int y){
            x= find(x);
            y= find(y);
            
            if(x == y) return 0;
            
            if(size[x]>=size[y]){
                par[y]=x;
                size[x]+=size[y];
            }
            else{
                par[x]=y;
                size[y]+=x;
            }
            
            return 1;
        }
    };
    
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        
        int n = s.size();
         DSU dsu(n);
        
        for(auto& p: pairs){
            dsu.merge(p[0], p[1]);
        }
        
        unordered_map<int, priority_queue<char,vector<char>,greater<char>>> Map;
        
        for(int i=0; i<n; i++){
            int comp = dsu.find(i);
            Map[comp].push(s[i]);
        }
        
        string ans;
        for(int i=0; i<n; i++){
            ans.push_back(Map[dsu.find(i)].top());
            Map[dsu.find(i)].pop();
        }
        
        return ans;
    }
};