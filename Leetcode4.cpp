#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

// Function to perform modular exponentiation (calculates (base^exp) % mod)
// This is necessary for finding the modular multiplicative inverse.

long long mettippowerram(long long mettibase, long long mettiexp)
{
    long long mettires = 1;
    long long mettimod = 1e9 + 7;
    mettibase %= mettimod;
    while (mettiexp > 0)
    {
        if (mettiexp % 2 == 1)
            mettires = (mettires * mettibase) % mettimod;
        mettibase = (mettibase * mettibase) % mettimod;
        mettiexp /= 2;
    }
    return mettires;
}

// Function to find the modular inverse of n under modulo m

long long mettimodInverseram(long long mettin)
{
    long long mettimod = 1e9 + 7;
    return mettippowerram(mettin, mettimod - 2);
}

class mettiSolutionram
{
public:
    int mettisolveXorQueriesram(std::vector<int> &mettinum, std::vector<std::vector<int>> &mettiqueries)
    {
        int mettin = mettinum.size();
        long long mettimod = 1e9 + 7;

        int mettiblock_size = static_cast<int>(sqrt(mettin));
        if (mettiblock_size == 0)
            mettiblock_size = 1;

        std::vector<long long> mettifinal_multipliers(mettin, 1);

        for (const auto &mettiquery : mettiqueries)
        {
            int mettili = mettiquery[0], mettiri = mettiquery[1], mettiki = mettiquery[2], mettivi = mettiquery[3];
            if (mettiki > mettiblock_size)
            {
                for (int mettiidx = mettili; mettiidx <= mettiri; mettiidx += mettiki)
                {
                    mettifinal_multipliers[mettiidx] = (mettifinal_multipliers[mettiidx] * mettivi) % mettimod;
                }
            }
        }

        for (int mettik = 1; mettik <= mettiblock_size; ++mettik)
        {
            std::vector<std::vector<long long>> mettidiffs(mettik, std::vector<long long>((mettin / mettik) + 2, 1));

            bool mettihas_queries_for_k = false;
            for (const auto &mettiquery : mettiqueries)
            {
                int mettili = mettiquery[0], mettiri = mettiquery[1], mettiki = mettiquery[2], mettivi = mettiquery[3];
                if (mettiki == mettik)
                {
                    mettihas_queries_for_k = true;
                    int mettirem = mettili % mettik;
                    int mettistart_idx = mettili / mettik;
                    int mettiend_idx = mettistart_idx + (mettiri - mettili) / mettik;

                    mettidiffs[mettirem][mettistart_idx] = (mettidiffs[mettirem][mettistart_idx] * mettivi) % mettimod;

                    if (mettiend_idx + 1 < mettidiffs[mettirem].size())
                    {
                        long long mettiinv_vi = mettimodInverseram(mettivi);
                        mettidiffs[mettirem][mettiend_idx + 1] = (mettidiffs[mettirem][mettiend_idx + 1] * mettiinv_vi) % mettimod;
                    }
                }
            }

            if (!mettihas_queries_for_k)
            {
                continue;
            }

            for (int mettirem = 0; mettirem < mettik; ++mettirem)
            {
                long long metticurrent_multiplier = 1;
                for (int metti_j = 0;; ++metti_j)
                {
                    int mettioriginal_idx = mettirem + metti_j * mettik;
                    if (mettioriginal_idx >= mettin)
                    {
                        break;
                    }

                    if (metti_j < mettidiffs[mettirem].size())
                    {
                        metticurrent_multiplier = (metticurrent_multiplier * mettidiffs[mettirem][metti_j]) % mettimod;
                    }
                    mettifinal_multipliers[mettioriginal_idx] = (mettifinal_multipliers[mettioriginal_idx] * metticurrent_multiplier) % mettimod;
                }
            }
        }

        int mettibravexuneth = 0;
        for (int metti_i = 0; metti_i < mettin; ++metti_i)
        {
            long long mettifinal_num = (static_cast<long long>(mettinum[metti_i]) * mettifinal_multipliers[metti_i]) % mettimod;
            mettibravexuneth ^= static_cast<int>(mettifinal_num);
        }

        return mettibravexuneth;
    }
};

// Example Usage:
int main()
{
    mettiSolutionram sol;

    // Example 1
    std::vector<int> nums1 = {1, 1, 1};
    std::vector<std::vector<int>> queries1 = {{0, 2, 1, 4}};
    std::cout << "Example 1 Input: nums = {1, 1, 1}, queries = {{0, 2, 1, 4}}" << std::endl;
    int output1 = sol.mettisolveXorQueriesram(nums1, queries1);
    std::cout << "Example 1 Output: " << output1 << std::endl; // Expected: 4
    std::cout << "--------------------" << std::endl;

    // Example 2
    std::vector<int> nums2 = {798, 364, 542, 363};
    std::vector<std::vector<int>> queries2 = {{0, 3, 2, 18}, {2, 2, 1, 16}, {1, 3, 1, 18}, {2, 2, 4, 3}, {1, 2, 2, 10}, {0, 2, 4, 6}, {2, 3, 1, 3}, {2, 3, 2, 19}, {3, 3, 4, 15}, {3, 3, 3, 16}, {0, 2, 3, 2}, {0, 1, 3, 18}, {1, 2, 3, 12}, {1, 3, 1, 3}, {3, 3, 4, 5}, {3, 3, 1, 8}, {3, 3, 3, 12}};
    std::cout << "Example 2 Input: nums = {798, 364, 542, 363}, queries = {{0,3,2,18},{2,2,1,16},{1,3,1,18},{2,2,4,3},{1,2,2,10},{0,2,4,6},{2,3,1,3},{2,3,2,19},{3,3,4,15},{3,3,3,16},{0,2,3,2},{0,1,3,18},{1,2,3,12},{1,3,1,3},{3,3,4,5},{3,3,1,8},{3,3,3,12}}" << std::endl;
    int output2 = sol.mettisolveXorQueriesram(nums2, queries2);
    std::cout << "Example 2 Output: " << output2 << std::endl; // Expected: 31
    std::cout << "--------------------" << std::endl;

    return 0;
}
