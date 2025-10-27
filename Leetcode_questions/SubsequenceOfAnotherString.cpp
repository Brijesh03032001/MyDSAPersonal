#include "bits/stdc++.h"
using namespace std;

bool isSubsequence(const std::string &s1, const std::string &s2)
{
    int i = 0; // Pointer for s1
    int j = 0; // Pointer for s2

    while (i < s1.length() && j < s2.length())
    {
        if (s1[i] == s2[j])
        {
            i++; // Match found, move to next character in s1
        }
        j++; // Always move to next character in s2
    }

    // If all characters of s1 were found in s2, then i will reach s1.length()
    return i == s1.length();
}

int main()
{
    std::string s1 = "ace";
    std::string s2 = "abcde";
    if (isSubsequence(s1, s2))
    {
        std::cout << "\"" << s1 << "\" is a subsequence of \"" << s2 << "\"" << std::endl;
    }
    else
    {
        std::cout << "\"" << s1 << "\" is NOT a subsequence of \"" << s2 << "\"" << std::endl;
    }

    std::string s3 = "aec";
    std::string s4 = "abcde";
    if (isSubsequence(s3, s4))
    {
        std::cout << "\"" << s3 << "\" is a subsequence of \"" << s4 << "\"" << std::endl;
    }
    else
    {
        std::cout << "\"" << s3 << "\" is NOT a subsequence of \"" << s4 << "\"" << std::endl;
    }

    return 0;
}