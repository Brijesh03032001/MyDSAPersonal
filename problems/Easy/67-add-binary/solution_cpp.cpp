class Solution {
public:
    string addBinary(string a, string b) {
        
        bool carry = false;
        string sumString;
        
        // Loop both strings in reverse order
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--)
        {
            // For cases where one string is shorter than other, take 0 as it's value
            bool aBool = (i>=0) && (a[i] == '1');
            bool bBool = (j>=0) && (b[j] == '1');
            
            // Sum of booleans is given as follows
            bool sum = aBool ^ bBool ^ carry;
            carry = (aBool && bBool) || (bBool && carry) || (aBool && carry);
            
            // Convert bools back to strings and push to a new string (reverse order of answer)
            sumString.push_back(sum ? '1' : '0');
            
        }
        // If a carry remains in the end, append it to the string
        sumString = carry ? sumString + '1' : sumString;
        // Return the reversed string
        return string(sumString.rbegin(), sumString.rend());
    }
};