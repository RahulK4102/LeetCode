class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int ans = 0;
        int size = s.size();
        for(int i =0; i<s.size()-1; i++){
           if(roman.at(s[i])>=roman.at(s[i+1])){
            ans += roman.at(s[i]);
            size--;
           }else{
            int temp = roman.at(s[i+1]) - roman.at(s[i]);
            ans += temp;
            i++;
            size -= 2;
           }
        }
        if(size!=0){
            ans += roman.at(s[s.size()-1]);
            size--;
        }
        return ans;
    }
};