class Solution
{
    public:
        vector<int> twoSum(vector<int> &arr, int target)
        {
            int n = arr.size();
            int i = 0, j = n-1;
            while (i < j)
            {
                if (arr[i] + arr[j] == target)
                {
                    return {i+1,j+1};
                }
                else if (arr[i] + arr[j] < target)
                {
                    i++;
                }
                else
                    j--;
            }
            return {};
        }
};