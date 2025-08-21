class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans ;
        int l = 0, u = 0 , d = matrix.size()-1, r = matrix[0].size()-1 ,i,j;
        while( u <= d && l <= r){
            for ( j = l ; j <= r; j ++){
                    ans.push_back(matrix[u][j]);
            }
            u++;
            for ( i = u ; i <= d ; i++){
                    ans.push_back(matrix[i][r]);
            }
            r--;
            if (u<=d){
                for ( j = r; j >= l; j--){
                        ans.push_back( matrix[d][j] );
                }
            }
            if (l <= r){
            for ( i = d - 1 ; i >= u ; i --){
                    ans.push_back( matrix[i][l] );
               }
            }
                    l++;    d--;
        }
        return ans;
    }
};