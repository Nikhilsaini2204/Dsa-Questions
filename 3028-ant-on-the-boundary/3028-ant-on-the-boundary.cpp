class Solution {
public:
    int returnToBoundaryCount(vector<int>& arr) {
        int n = arr.size();
        int cnt = 0;
        for(int i=0;i<n-1;i++){
            arr[i+1]+=arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt++;
            }
        }
        return cnt;
    }
};