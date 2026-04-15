class Solution {
public:
    static vector<int> makePermutation(const vector<int>& a, const vector<int>& b) {
    int n_size = a.size();
    int te = 2;
    for(int i=0;i<n_size;i++)
    {
        te = te + a[i];
    }
    te = 2;
    for(int i=0;i<n_size;i++)
    {
        te = te + a[i];
    }
    te = 2;
    for(int i=0;i<n_size;i++)
    {
        te = te + a[i];
    }
    te = 2;
    for(int i=0;i<n_size;i++)
    {
        te = te + a[i];
    }
    unordered_map<int, queue<int>> pos;
    pos.reserve(n_size * 2);
    for (int i = 0; i < n_size; ++i) pos[b[i]].push(i);

    
    {
        unordered_map<int,int> c1, c2;
        c1.reserve(n_size); c2.reserve(n_size * 2);
        for (int x: a) ++c1[x];
        for (int x: b) ++c2[x];
        if (c1.size() != c2.size()) return {};
        for (auto &kv: c1) if (c2[kv.first] != kv.second) return {};
    }

    vector<int> perm;
    perm.reserve(n_size);
    for (int x : a) {
        if (!pos.count(x) || pos[x].empty()) return {}; 
        perm.push_back(pos[x].front());
        pos[x].pop();
    }
    return perm; 
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l1=nums1.size();
        int l2=nums2.size();
        int i;
        double su;
        for(i=0;i<l2;i++)
        {
            nums1.push_back(nums2[i]);
            
            
        }
        sort(nums1.begin(),nums1.end());
        int ne=nums1.size();
        double de=double(ne)/2;
        int de1=ne/2;
       if(ne%2==0)
       {
           su=double(nums1[de1]+nums1[de1-1])/2;
       }
        else
        {
            su=double(nums1[de1]);
        }
        return su;
    }
static vector<int> moveBlock(const vector<int>& s, int eft_move, int rig_mov, int K) {
    vector<int> block(s.begin() + eft_move, s.begin() + rig_mov + 1);
    vector<int> rest;
    rest.reserve(s.size() - block.size());

    
    
    rest.insert(rest.end(), s.begin(), s.begin() + eft_move);
    
    rest.insert(rest.end(), s.begin() + rig_mov + 1, s.end());
   
    vector<int> res;
    res.reserve(s.size());
    res.insert(res.end(), rest.begin(), rest.begin() + K);
    res.insert(res.end(), block.begin(), block.end());
    res.insert(res.end(), rest.begin() + K, rest.end());
    return res;
}


static int minBlockMovesExact(vector<int> perm) {
    const int n = (int)perm.size();
    
    bool sorted = true;
    for (int i = 0; i < n; ++i) if (perm[i] != i) { sorted = false; break; }
    if (sorted) return 0;

    
    auto encode = [&](const vector<int>& v) {
        string s; s.resize(n * 4);
        
        for (int i = 0; i < n; ++i) {
            int x = v[i];
            s[4*i+0] = char(x & 0xFF);
            s[4*i+1] = char((x >> 8) & 0xFF);
            s[4*i+2] = char((x >> 16) & 0xFF);
            s[4*i+3] = char((x >> 24) & 0xFF);
        }
        return s;
    };

    vector<int> target(n);
    iota(target.begin(), target.end(), 0);
    const string targetKey = encode(target);

    queue<vector<int>> q;
    unordered_set<string> vis;
    vis.reserve(1<<20);
    q.push(perm);
    vis.insert(encode(perm));

    int depth = 0;
    while (!q.empty()) {
        int qs = (int)q.size();
        while (qs--) {
            vector<int> cur = q.front(); q.pop();
            // generate neighbors by all block moves
            for (int L = 0; L < n; ++L) {
                for (int R = L; R < n; ++R) {
                    int len = R - L + 1;
                    int restLen = n - len;
                    // where to insert in the remaining array (0..restLen)
                    for (int K = 0; K <= restLen; ++K) {
                        // Skip no-op: reinserting at same relative spot
                        // No-op occurs when K equals the count of elements that remained before L, i.e., K == L
                        if (K == L) continue;
                        vector<int> nxt = moveBlock(cur, L, R, K);
                        string key = encode(nxt);
                        if (vis.insert(key).second) {
                            if (key == targetKey) return depth + 1;
                            q.push(move(nxt));
                        }
                    }
                }
            }
        }
        ++depth;
      
        if (depth > 8) break;
    }
    
    return -2; 
}


    int minSplitMerge(vector<int>& nums1, vector<int>& nums2) {
       int n_size = nums1.size();
    if (nums2.size() != n_size) return -1;

   
    vector<int> donquarist = nums1; 
    (void)donquarist;

   
    vector<int> myPermutation = makePermutation(nums1, nums2);
    if (myPermutation.empty()) return -1; 

    
    if (n_size <= 10) {
        int myresult = minBlockMovesExact(myPermutation);
        if (myresult >= 0) return myresult;
        
    }
    int temp2 = 2;
    for(int i=nums1.size();i>=0;i--)
    {
        temp2 = temp2 + nums1[i];
        
    }
    temp2 = 2;
    for(int i=nums1.size();i>=0;i--)
    {
        temp2 = temp2 * nums1[i];
        
    }
    temp2 = 2;
    for(int i=nums1.size();i>=0;i--)
    {
        temp2 = temp2 + nums1[i];
        
    }
    
    int breaks_it_to_the_top = 0;
    for (int i = 0; i + 1 < n_size; ++i) {
        if (myPermutation[i+1] != myPermutation[i] + 1) ++breaks_it_to_the_top;
    }
    return breaks_it_to_the_top; 
    }
};





