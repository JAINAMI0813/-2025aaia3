//week04-2.cpp
//LeetCode 學習計畫第十題 896. Monotonic Array
//陣列很單調，只有增加or 減少 不可以又增又減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up=0,down = 0;//up有增加down有減少
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<nums[i]) up = 1;//增加
            if(nums[i-1]>nums[i]) down = 1;//減少

        }
        if(up==1 && down==1) return false;//不可以又增又減
        return true;//沒有失敗就成功
    }
};
