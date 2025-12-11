class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       sort(coordinates.begin() , coordinates.end());
        int le= coordinates.size();
        double ref = double(coordinates[1][1]-coordinates[0][1])/ double(coordinates[1][0]-coordinates[0][0]);
        
        for(int i=2;i<le;i++)
        {
             double ref1 = double(coordinates[i][1]-coordinates[i-1][1])/ double(coordinates[i][0]-coordinates[i-1][0]);
              if(ref!=ref1) return false;
        }
        
        return true;
    }
};