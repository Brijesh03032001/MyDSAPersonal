class Solution {
    bool checkDivisibility(int n, int digit)
{
    // If the digit divides the number
    // then return true else return false.
    return (digit != 0 && n % digit == 0);
}
  
// Function to check if all digits
// of n divide it or not
bool allDigitsDivide(int n)
{
    int temp = n;
    while (temp > 0) {
  
        // Taking the digit of the
        // number into digit var.
        int digit = temp % 10;
        if (!(checkDivisibility(n, digit)))
            return false;
  
        temp /= 10;
    }
    return true;
}
  
    
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++)
        {
            int re=allDigitsDivide(i);
            if(re)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};