class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        int curr = 0;
        for (int i = 0; i < n; i++) {
            if (freq[nums[i]] > 0) {
                nums[curr++] = nums[i];
                freq[nums[i]] = 0;
            }
        }
        n = curr;
        return n ;
    }
};