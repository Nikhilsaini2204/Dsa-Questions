class Solution {
public:
    int countKeyChanges(string str) {
        int n = str.length();
        int cnt = -1;
        for(auto& x : str){
            x = tolower(x);
        }
        for(int i =0;i<n;i++){
            if(str[i]!= str[i+1]){
                cnt++;
            }
        }
        return cnt;
    }
};