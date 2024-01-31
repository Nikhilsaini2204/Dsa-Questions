class Solution {
public:
    bool isPalin(string s,int start,int end){
        while(start<end){
            if(s[start++]!=s[end--]){
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int left=0,right=n-1;
        while(left<right){
            if(s[left]!=s[right]){
                return (isPalin(s,left+1,right) || isPalin(s,left,right-1));
            }
            left++,right--;
        }
        return true;
    }
    
};