class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        double ans = myPow(x,abs(n)/2);
        if(n%2==0){
            ans = ans*ans;
        }else{
            ans = x*ans*ans;
        }
        return (n < 0) ? 1 / ans : ans;
    }
};