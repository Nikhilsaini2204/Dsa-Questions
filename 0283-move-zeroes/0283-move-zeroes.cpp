class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
       int j=0, temp;
        for(int i=0;i<n;i++){
            if(arr[i]!=0 && arr[j]==0){
                swap(arr[i],arr[j]);
            }
            if(arr[j]!=0)
              j+=1;  
        }
    }
};