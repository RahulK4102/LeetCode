class Solution {
public:
    bool isPalindrome(int x) {
        int n =x;
        long long revint = 0;
        if(x<0){
            return false;
        }
        while (x != 0) {
                int digit = x % 10;
                revint = (revint * 10) + digit;
                x = x / 10;
        }
        if(revint == n)return true;
        return false;
    }
};