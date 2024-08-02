class Solution {
public:
    void GenParen(int l,int r,vector<string> &ans,int n,string temp){
        if(l>n || r>n){
            return;
        }
        if(l<r){
            return;
        }


        if(l==r && r==n){
            ans.push_back(temp);
            return;
        }
        temp += '(';
        GenParen(l+1,r,ans,n,temp);
        temp.pop_back();
        temp += ')';
        GenParen(l,r+1,ans,n,temp);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp = "";
        GenParen(0,0,ans,n,temp);
        return ans;
    }
};