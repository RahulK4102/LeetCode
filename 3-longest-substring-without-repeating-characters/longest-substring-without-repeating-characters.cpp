class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;
        for(int i = 0; i<n; i++){
        unordered_map<char,int> alpha;
        int size = 1;
            for(int j = i; j<n; j++){
                if(alpha.find(s[j])==alpha.end()){
                    size = j-i +1;
                    res = max(res,size);
                }else{
                    break;
                }
                alpha[s[j]]++;
            }
        }
        return res;
    }
};