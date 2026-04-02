class Solution {
public:
    int binaryGap(int n) {
        int dig, cur = 0, max = 0;
        if(n == 0) {
            return 0;
        }
        while(n > 0 && n % 2 == 0) {
            n /= 2;
        }
        if(n == 0) {
            return 0;
        }
        int count = 0;
        while(n > 0) {
            if(n % 2 == 0) {
                cur++;
            } else {
                max = std::max(cur, max);
                count++;
                cur = 0;
            }
            n /= 2;
        }
        if(count == 1) {
            return 0;
        }
        return max + 1;
    }
};