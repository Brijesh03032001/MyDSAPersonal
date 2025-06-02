class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>st1;
        unordered_set<int>st2;
        vector<int>C(A.size());
        if(A[0]==B[0])
        {
            C[0]=1;
        }
        else
        {
            C[0]=0;
            st1.insert(A[0]);
            st2.insert(B[0]);
        }
        if(A.size()>=2)
        {
        for(int i=1;i<A.size();i++)
        {
            if(A[i]==B[i])
            {
                C[i]=C[i-1]+1;
            }
            else
            {
                int co=0;
                if(st1.find(B[i])!= st1.end())
                {
                    co++;
                }
                else
                {
                    st2.insert(B[i]);
                }
                if(st2.find(A[i])!= st2.end())
                {
                    co++;
                }
                else
                {
                    st1.insert(A[i]);
                }
                
                C[i]= C[i-1]+ co;
            }
        }
        }
       return C;
    }
};