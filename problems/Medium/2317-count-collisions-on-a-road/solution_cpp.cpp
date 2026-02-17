class Solution
{
public:
    int countCollisions(string s)
    {
        int i = 0;
        int ct = 0;

        int k = 0; // it stores count of R and it will be subtracted if last index of R is the last element;
        while (i < s.length())
        {
            if (s[i] == 'R' and s[i + 1] == 'R')
            {
                ct++;

                k++;
                if ((i + 1) == (s.length() - 1))
                {
                    ct = ct - k;
                }
                else if (s[i + 2] != s[i + 1]) // if last index of combination of R is not the last element of the string, the value of k will reset to 0
                {
                    k = 0; // k will increase only when the ending index of 'R' is the last element and for the rest of the cases the value of the k is 0;
                }
            }

            else if (s[i] == 'R' and s[i + 1] == 'L')
            {
                ct = ct + 2;
                s[i + 1] = 'S';
            }

            else if (s[i] == 'S' and s[i + 1] == 'L')
            {
                ct++;

                s[i + 1] = 'S';
            }
            else if (s[i] == 'R' and s[i + 1] == 'S')
            {
                ct++;
            }

            i++;  
        }

        return ct;
    }
};