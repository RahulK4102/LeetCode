class Solution {
public:
    string addBinary(string a, string b) {
        int lenA = a.length();
        int lenB = b.length();
        string ans = "";
        string result = "";
        int carry = 0;
        while(lenA!=0 && lenB!=0){
            if(a[lenA-1]=='0' && b[lenB-1]=='0'){
                if(carry==1){
                    ans.push_back('1');
                    carry =0;
                }else{
                    ans.push_back('0');
                }
            }else if((a[lenA-1]=='0' && b[lenB-1] == '1' )||(a[lenA-1]=='1' && b[lenB-1] == '0')){
                if(carry==1){
                    ans.push_back('0');
                    carry =1;
                }else{
                    ans.push_back('1');
                }
            }else if(a[lenA-1]=='1' && b[lenB-1]=='1'){
                if(carry==1){
                    ans.push_back('1');
                    carry =1;
                }else{
                    ans.push_back('0');
                    carry = 1;
                }
            }
            lenA--;
            lenB--;
        }
        while(lenA!=0){
            if(carry==1 && a[lenA-1]=='1'){
                ans.push_back('0');
                carry = 1;
            }else if(carry==0){
                ans.push_back(a[lenA-1]);
            }else if(carry==1 && a[lenA-1]=='0'){
                ans.push_back('1');
                carry = 0;
            }
            lenA--;
        }
        while(lenB!=0){
            if(carry==1 && b[lenB-1]=='1'){
                ans.push_back('0');
                carry = 1;
            }else if(carry==0){
                ans.push_back(b[lenB-1]);
            }else if(carry==1 && b[lenB-1]=='0'){
                ans.push_back('1');
                carry = 0;
            }
            lenB--;
        }
        if(carry==1){
            ans.push_back('1');
        }
        int anslen = ans.length();
        while(anslen!=0){
            result.push_back(ans[anslen-1]);
            anslen--;
        }
        return result;
    }
};