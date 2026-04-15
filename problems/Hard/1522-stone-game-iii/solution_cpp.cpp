class Solution {
public:
    vector<vector<vector<pair<long long, long long>>>> dpPair;

// recursive function returning {aliceScore, bobScore}
pair<long long, long long> solScores(int person, int ind, vector<int> &piles, int M)
{
    int n = (int)piles.size();
    if (ind >= n)
        return {0LL, 0LL};

    // memo check
    if (dpPair[person][ind][M].first != -1)
        return dpPair[person][ind][M];

    long long su = 0;
    pair<long long, long long> best;
    if (person == 1) {
        // Alice will maximize her final total
        best = {LLONG_MIN, LLONG_MIN};
    } else {
        // Bob will choose to minimize Alice's final total, so initialize best accordingly
        best = {LLONG_MAX, LLONG_MAX};
    }

    int maxTake = min(3, n - ind);
    for (int x = 1; x <= maxTake; ++x) {
        su += piles[ind + x - 1];
        auto next = solScores(1 - person, ind + x, piles, 3);

        pair<long long, long long> cur;
        if (person == 1) {
            // Alice takes 'su' now
            cur.first = su + next.first;   // Alice's total
            cur.second = next.second;      // Bob's total stays from future
            // choose branch that maximizes Alice
            if (cur.first > best.first) best = cur;
        } else {
            // Bob takes 'su' now
            cur.first = next.first;             // Alice's total from future
            cur.second = su + next.second;      // Bob's total
            // Bob chooses move that *minimizes* Alice's final score
            if (cur.first < best.first) best = cur;
        }
    }

    dpPair[person][ind][M] = best;
    return best;
}

int stoneGameII_withBothScores(vector<int> &piles, pair<long long,long long> &outBoth)
{
    int n = (int)piles.size();
    // dpPair dimensions: person (0/1) x ind (0..n) x M (0..n)
    dpPair.assign(2, vector<vector<pair<long long,long long>>>(n + 1, vector<pair<long long,long long>>(3 + 1, {-1LL, -1LL})));

    auto ans = solScores(1, 0, piles, 3); // start with Alice
    outBoth = ans;
    return (int)ans.first; // return Alice score for compatibility, but outBoth has both
}

    string stoneGameIII(vector<int>& piles) {
        pair<long long,long long> both;
    stoneGameII_withBothScores(piles, both);
    // both.first = Alice, both.second = Bob
    cout << "Alice: " << both.first << " Bob: " << both.second << "\n";
     if (both.first > both.second ) return "Alice";
     else if (both.first == both.second ) return "Tie";
     else return "Bob";
     
    
    }
};