class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int max = 0;
        for(int i=0;i<n;i++){
            if(freq[nums[i]] > (n/2)){
                max = nums[i];
            }
        }
        return max;
    }
};