class Solution {
public:
    bool isPalindrome(int x){
    int org=x;
    double rev=0;
    if(x<0)
    return false;
    while(x!=0){
        rev=rev*10 + x%10;
        x=x/10;
    }
    if(org==rev)
    return true;
    else 
    return false;
}
};