class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        int a = sides[0];
        int b = sides[1];
        int c = sides[2];

        // Step 1: Check triangle validity
        if (a + b <= c || b + c <= a || a + c <= b) {
            return {};
        }

        // Step 2: Compute angles using Law of Cosines
        auto getAngle = [](double x, double y, double z) {
            double val = (y*y + z*z - x*x) / (2.0 * y * z);
            
            // Clamp to avoid precision issues
            val = max(-1.0, min(1.0, val));
            
            return acos(val); // in radians
        };

        double A = getAngle(a, b, c);
        double B = getAngle(b, a, c);
        double C = getAngle(c, a, b);

        // Step 3: Convert to degrees
        const double PI = acos(-1);
        A = A * 180.0 / PI;
        B = B * 180.0 / PI;
        C = C * 180.0 / PI;

        vector<double> ans = {A, B, C};

        // Step 4: Sort non-decreasing
        sort(ans.begin(), ans.end());

        return ans;
    }
};