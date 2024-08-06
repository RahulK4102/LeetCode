class Solution {
public:
    void Palpart(string s,vector<vector<string>> &ans,vector<string> &temp,int ind){
        if(ind == s.size()){
            ans.push_back(temp);
        }
        for(int i = ind; i<s.size(); i++){
            if(isPal(ind,i,s)){
                temp.push_back(s.substr(ind,i-ind+1));
                Palpart(s,ans,temp,i+1);
                temp.pop_back();
            }
        }
    }
    bool isPal(int ind,int i,string s){
        while(i>=ind){
            if(s[i]!=s[ind]){
                return false;
            }
            ind++;
            i--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        Palpart(s,ans,temp,0);
        return ans;
    }
};