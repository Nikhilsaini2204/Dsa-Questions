class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>result;
        for(int i=0;i<nums.size();i++){
            int complement = target  - nums[i];
            if(result.count(complement)){
                return {result[complement],i};
            }
            result[nums[i]]=i;
        }
        return {};
    }
};