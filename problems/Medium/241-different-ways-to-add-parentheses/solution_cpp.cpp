class Solution {
public:
    
    void print (vector<int> &arr) {
        cout << "arr is ";
        for (int &i : arr) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        if (expression.length() == 0) return ans;
        
        
        //cout << "Expression is " << expression << endl;
        for (int i = 0; i < expression.length(); i++) {
            if (isdigit(expression[i])) {
                continue;
            }
            vector<int> left = diffWaysToCompute(expression.substr(0, i));
            vector<int> right = diffWaysToCompute(expression.substr(i+1));
            for (int j = 0; j < left.size(); j++) {
                for (int k = 0; k < right.size(); k++) {
                    switch (expression[i]) {
                        case '+':
                            ans.push_back(left[j]+right[k]);
                            break;
                        case '-':
                            ans.push_back(left[j]-right[k]);
                            break;
                        case '*':
                            ans.push_back(left[j]*right[k]);
                            break;
                        default:
                            break;
                    }
                }
            }
           // print(ans);
        }
        
        if (ans.size() == 0 && expression.length() > 0) {
            ans.push_back(stoi(expression));
        }
        
        return ans;
    }
};