class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int product = 1;
        int sum = 0;
        for(auto&c:s)
        {
            int num = c - '0';
            product *= num;
            sum += num;
        }
        return product - sum;
    }
};