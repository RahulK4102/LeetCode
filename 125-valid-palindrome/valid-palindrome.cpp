class Solution {
public:
    char toLowerCase(char ch) {
        if (ch >= 'a' && ch <= 'z') {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool isvalid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string ans = "";
        for (int i = 0; i < s.length(); i++) {
            if (isvalid(s[i])) {
                ans.push_back(s[i]);
            }
        }
        int start =0;
        int end = ans.length()-1;
        while (start <= end) {
            if (toLowerCase(ans[start]) != toLowerCase(ans[end])) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};