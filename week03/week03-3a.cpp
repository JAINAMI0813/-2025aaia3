//week03-3a.cpp二合一的第一種方法 把不是0的找出來
//LeetCode 學習計畫 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)ans.push_back(nums[i]);
        }//上面把「不是0的數」暫時放在ans裡，等移下塞回去
        //用for迴圈放回去
        for(int i=0;i<nums.size();i++){
            if(i <ans.size()) nums[i] = ans[i];
            else nums[i] = 0;
        }
    }
};
