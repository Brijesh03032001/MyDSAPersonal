class Solution {
public:
    string fractionToDecimal(int n, int d) {
        if(d == 1){
            return to_string(n);
        }
        if(d == -1 && n>0){
            string ans = to_string(n);
            return ans.insert(0, "-");
        }
        if(d == -1 && n<0){
            string ans = to_string(n);
            ans = ans.substr(1, ans.size());
            return ans;
        }
        bool check = false;
        if(n < 0 && d>0 || n > 0 && d<0){
            check = true;
            n = 0 - n;
        }
        string ans;
        unordered_map<long long int, int> mp;
        long long int q = n/d;
        long long int r = n%d;
        ans = to_string(q);
        if(check == true){
            ans.insert(0, "-");
        }
        if(r == 0){
            return ans;
        }
        ans = ans + '.';
        while(r != 0){
            if(mp.find(r) != mp.end()){
                int pos = mp[r];
                ans.insert(pos, "(");
                ans += ")";
                
                return ans;
            }
            else{
                mp[r] = ans.size();
                r = r*10;
                q = r/d;
                r = r%d;
                ans += to_string(q);
            }
        }
        return ans;
    }
};