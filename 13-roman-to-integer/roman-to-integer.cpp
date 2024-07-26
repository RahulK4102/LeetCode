class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> roman;
        pair<char,int> pair1('I',1);
        pair<char,int> pair2('V',5);
        pair<char,int> pair3('X',10);
        pair<char,int> pair4('L',50);
        pair<char,int> pair5('C',100);
        pair<char,int> pair6('D',500);
        pair<char,int> pair7('M',1000);
        roman.insert(pair1);
        roman.insert(pair2);
        roman.insert(pair3);
        roman.insert(pair4);
        roman.insert(pair5);
        roman.insert(pair6);
        roman.insert(pair7);
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