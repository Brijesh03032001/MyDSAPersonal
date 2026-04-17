class Solution {
public:
    int numTrees(int n) {
       long unsigned int c = 1;
        for(int i = 1; i <= n; i++){
            c *= (4 * i-2);
            c /= (i+1);
        }
        return c; 
    }
};