//week08-1.cpp Leetcode學習計畫 Matrix第一題
//1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans;
        for(int i=0;i<accounts.size();i++){
            int now = 0;
            for(int j=0;j<accounts[0].size();j++){
                now += accounts[i][j];//把錢加起來
            }//迴圈裏面 更新now 陣列 左手i 右手J
            ans = max(ans,now);//最有錢的人
        }
        return ans;
    }
};
