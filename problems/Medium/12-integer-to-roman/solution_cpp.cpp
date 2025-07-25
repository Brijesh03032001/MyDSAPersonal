class Solution {
public:
    string ans(int num)
    {
        vector<pair<int,string>>vc = {{1,"I"}, {4,"IV"},
                                      {5,"V"}, {9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},   
                                      {900,"CM"}, {1000,"M"}};
        string res="";
        int i = vc.size()-1;
        for(auto it : vc)
        {
            cout<< it.first << "&&&" << it.second ;
        }
        cout<< i;
        while(num>0)
        {
            int div = num/ vc[i].first;
            num = num % vc[i].first;
            while(div)
            {
                res = res + vc[i].second;
                div--;
            }
            i--;
        }
        return res;                              

    }
    string intToRoman(int num) {
        return ans(num);

    }
};