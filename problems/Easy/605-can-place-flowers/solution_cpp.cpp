
  
class Solution
{
    public:
        bool canPlaceFlowers(vector<int> &flowerbed, int n)
        {
            // assume we have a new inserted element at the front of the array that 
            // has the value of zero, this will help cover the case of [0,0,1,0] with n = 1
            // since we can make it look like [1,0,1,0]
            int consecutive_zero_counter = 1;
            
            // apply the same logic from above for the tail of the array
            // i.e. [1,0,1,0,0] with n = 1 , should look like [1,0,1,0,1]
            flowerbed.push_back(0);
            
            for (int i = 0; i < flowerbed.size(); i++)
            {
                consecutive_zero_counter = flowerbed[i] ? 0 : consecutive_zero_counter + 1;

                if (consecutive_zero_counter == 3)
                {
                    n--;
                    // since the left adjacent is 0, we reset the counter to 1 and not 0
                    consecutive_zero_counter = 1;
                }
            }
            
            // <= because the tail has an additional 0 at the end which can bring n to -1
            return n <= 0;
        }
};