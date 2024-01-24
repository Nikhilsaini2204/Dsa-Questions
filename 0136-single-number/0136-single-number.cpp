class Solution
{
    public:
        int singleNumber(vector<int> &arr)
        {
            int n = arr.size();
            unordered_map<int, int> freq;
            for (int i = 0; i < n; i++)
            {
                freq[arr[i]]++;
            }
            int min = 0;
            for (int i = 0; i < n; i++)
            {
                if (freq[arr[i]] == 1)
                {
                    min = arr[i];
                }
            }
            return min;
        }
};