class Solution {
public:
    string solveEquation(string equation) {
        int i = 0;
        int x = 0, sum = 0;
        int sign = 1;
        int equalSign = 1;
        int n = equation.size();
        while(i < n) {
            if(equation[i] == '+' || equation[i] == '-') {
                sign = equation[i] == '+' ? 1 : -1;
                i++;
            }
            if(equation[i] == '=') {
                i++;
                equalSign = -1;
                sign = 1;
                continue;
            }
            int num = 0;
            while(i < n  && isdigit(equation[i])) {
                num = num*10 + (equation[i] - '0');
                i++;
            }
            if(i < n  && equation[i] == 'x') {
                x += sign*equalSign*max(num, 1);
                if(i-1 >= 0 && equation[i-1] == '0') x -= sign*equalSign*max(num, 1);
                i++;
            }
            else {
                sum += sign*equalSign*num;
            }
        }
        if(x == 0 && sum == 0) return "Infinite solutions";
        if(x == 0) return "No solution";
        int res = (-1*sum)/x;
        return "x="+to_string(res);
    }
};