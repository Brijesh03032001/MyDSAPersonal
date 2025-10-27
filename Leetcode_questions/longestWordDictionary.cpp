#include "bits/stdc++.h"
using namespace std;

string findLongestWord(string s, vector<string> &dictionary)
{
    unordered_map<char, int> mp1;

    vector<string> mp2;
    for (int i = 0; i < s.size(); i++)
    {
        mp1[s[i]]++;
    }
    // for (auto it : mp1)
    // {
    //     cout << it.first << "***" << it.second << "\n";
    // }
    for (int i = 0; i < dictionary.size(); i++)
    {
        string ref = dictionary[i];
        unordered_map<char, int> mp3;
        cout << ref << "\n";
        for (int j = 0; j < ref.size(); j++)
        {
            mp3[ref[j]]++;
        }
        for (auto it : mp3)
        {
            cout << it.first << "***" << it.second << "\n";
        }
        int te = 0;
        for (auto it : mp3)
        {
            if (mp1.find(it.first) != mp1.end())
            {
                // cout << mp1[it.first] << "\n";
                if (mp1[it.first] >= it.second)
                {
                    te++;
                }
            }
        }
        if (te == mp3.size())
        {
            cout << "Entered";
            mp2.push_back(ref);
        }
    }

    for (auto it : mp2)
    {
        cout << it << "\n";
    }
    return "a";
}

int main()
{
    string a;
    cin >> a;
    vector<string> dic;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string te;
        cin >> te;
        dic.push_back(te);
    }
    cout << findLongestWord(a, dic) << "\n";
    return 0;
}