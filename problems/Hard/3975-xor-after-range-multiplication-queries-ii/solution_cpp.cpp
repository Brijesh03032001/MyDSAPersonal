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

class Solution
{
public:
    int xorAfterQueries(std::vector<int> &mettinum, std::vector<std::vector<int>> &mettiqueries)
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
