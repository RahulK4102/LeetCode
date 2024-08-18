class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string res;
        int i = 0;
        while(i<n){
            while(s[i]==' ' && i<n) i++;
            if(i>=n) break;
            int j = i + 1;
            while(j<n && s[j]!=' ') j++;
            string sub = s.substr(i,j-i);
            if(res.size()==0) res = sub;
            else res = sub + ' ' + res;
            i = j+1;
        }
        return res;
    }
};