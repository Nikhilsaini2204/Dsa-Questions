class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int max = 0;
        for(int i=0;i<n-1;i++){
            gain[i+1]+=gain[i];
        }
        max = *max_element(gain.begin(),gain.end());
        if(max<0)
            return 0;
        else
            return max;
    }
};