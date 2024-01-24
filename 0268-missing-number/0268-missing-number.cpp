class Solution
{
    public:
        int missingNumber(vector<int> &arr)
        {
            int n = arr.size();
            int maxprod = 0;
            for (int i = 0; i <= n; i++)
            {
                maxprod += i;
            }
            int sum = 0;
            for (int i = 0; i < n - 1; i++)
            {
                arr[i + 1] += arr[i];
            }
            return maxprod - arr[n - 1];
        }
};