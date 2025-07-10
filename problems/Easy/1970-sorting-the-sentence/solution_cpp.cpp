class Solution {
public:
    string sortSentence(string text) {
        vector<string> res;
        stringstream ss(text);
        string word;
        
        while (ss >> word) {
            int n = word.size();

            string temp = word.substr(0,n-1);
            char last = word[n-1];
            string add_string = "";
            add_string = add_string + last;
            add_string = add_string + temp;
            res.push_back(add_string);
        }
        sort(res.begin(), res.end());
        string final_str ="";
        for(int i=0;i<res.size();i++)
        {
            string temp = res[i].substr(1);
            final_str = final_str + temp + " ";
            
        }
        string trim_final_string = final_str.substr(0,final_str.size()-1);
        return trim_final_string;


    }
};