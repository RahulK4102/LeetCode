class Solution {
public:
    int divide(int dividend, int divisor) {
        long sum = 0;
        long Dividend = abs(dividend);
        long Divisor = abs(divisor);
        bool sign = true;
        if(dividend>=0 && divisor<0){
            sign = false;
        }else if(dividend<0 && divisor>=0){
            sign = false;
        }
        if(Dividend==Divisor){
            if(sign){
            return 1;
        }else{
            return -(1);
        }
        }
        while(Dividend>=Divisor){
            int count = 0;
            while(Dividend >= (Divisor<<count+1)){
                count++;
            }
            sum += 1<<count;
            Dividend = Dividend - (Divisor<<count);
        }
        if(sum == (1<<31) && sign == true){
            return INT_MAX;
        }else if(sum == (1<<31) && sign == false){
            return INT_MIN;
        }
        if(sign){
            return sum;
        }else{
            return -(sum);
        }
        return 0;
    }
};