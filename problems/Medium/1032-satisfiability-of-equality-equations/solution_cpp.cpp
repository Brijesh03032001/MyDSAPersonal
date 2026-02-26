class Solution {
public:
    int root[26];
    int rank[26];
    unordered_map<int, unordered_set<int>> m;
    
    int find(int i){
        if(root[i]==i){
            return i; 
        }
        return root[i] = find(root[i]);
    }
    
    bool isUnequal(int a, int b){
        if(m[a].find(b)!=m[a].end()) return true;
        if(m[b].find(a)!=m[b].end()) return true;
        return false; 
    }
                 
    void unionset(int x, int y){
        if(rank[x]>rank[y]){
            root[y] =x;
            m[x].insert(m[y].begin(), m[y].end());
        }else if(rank[y]>rank[x]){
            root[x] =y;
            m[y].insert(m[x].begin(), m[x].end());
        }else{
            root[y] =x;
            m[x].insert(m[y].begin(), m[y].end());
            rank[x]++;
        }
    }
                 
    bool equationsPossible(vector<string>& equations) {
        int n = equations.size();
        for(int i=0; i<26; i++) {
            root[i] = i;
            rank[i] = 0;
        }
        
        for(int i=0; i<n; i++){
            string s = equations[i];
            int var1 = s[0]-'a', var2 = s[3]-'a';
            bool equal = s[1]=='=';
            
            if(equal){
                int root1 = find(var1);
                int root2 = find(var2);
                if(isUnequal(root1, root2)) return false;
                
                if(root1!=root2) unionset(root1, root2);
            }else{
                int root1 = find(var1);
                int root2 = find(var2);
                if(root1==root2) return false;
                m[root1].insert(root2);
                m[root2].insert(root1);
            }
            // cout<<endl;
        }
        
        return true;
    }
};