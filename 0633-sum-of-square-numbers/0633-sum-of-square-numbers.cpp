class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c == 1)
            return true;
        long long int i = 0,j = sqrt(c);
        while(i<=j){
            if((i*i)+(j*j)==c)
                return true;
            else if((i*i)+(j*j)<c)
                i++;
            else 
                j--;
        }
        return false;
    }
};