class Solution {
public:
    int countPrimes(int n) {
        vector<bool> temp(n+1,true);
        temp[0] = temp [1] = false;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(temp[i]){
                count++;
                for(int j = i*2; j<n; j+=i){
                    temp[j]=false;
                }
            }
        }
        return count;
    }
};