class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            result.push_back(nums[i]+nums[j]);
            i++,j--;
        }
        int maxi = *max_element(result.begin(),result.end());
        return maxi;
    }
};