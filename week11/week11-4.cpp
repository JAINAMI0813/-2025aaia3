//week11-4.cpp 學習計畫 Math 倒數第三題
//LeetCode 67.Add Binary 二進位加法
//用字串 來表達很長的二進位數字
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length()-1,j = b.length()-1;
        vector<int> ans;
        int carry = 0;
        while(i>=0 || j>=0){
            int now = carry;
            if(i>=0){
                now += a[i]-'0';
                i--;
            }
            if(j>=0){
                now += b[j]-'0';
                j--;
            }
            ans.push_back(now%2);
            carry = now/2;
        }
        if(carry>0) ans.push_back(carry);
        string strAns;
        for(int i=ans.size()-1;i>=0;i--){
            strAns = strAns +(char)(ans[i]+'0');
        }
        return strAns;
    }
};
