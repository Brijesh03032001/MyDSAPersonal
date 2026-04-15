class Solution {
public:
    vector<int> decimalRepresentation(int n) {

        vector<int> rse;
        string rs = to_string(n);
        
        int le = rs.size();
        double ref = pow(10,le-1);
        int refi = int(ref);
       
        for(int i=0;i<le;i++)
        {
            int result = (rs[i] - '0') * refi;
            if(result == 0)
            {
                int c = 0;
            }
            else
            {
                
            rse.push_back(result);
            }
            
           refi = refi / 10; 
        }
        
        return rse;
    }
};