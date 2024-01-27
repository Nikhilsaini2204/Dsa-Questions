class Solution
{
    public:
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {
            int n = candies.size();
            vector<bool> result(n);
            int max1 = candies[0];
            for (int i = 0; i < n; i++)
            {
                if (candies[i] > max1)
                    max1 = candies[i];
            }
            for (int i = 0; i < n; i++)
            {
                if (candies[i] + extraCandies >= max1)
                {
                    result[i] = true;
                }
                else
                {
                    result[i] = false;
                }
            }
            return result;
        }
};