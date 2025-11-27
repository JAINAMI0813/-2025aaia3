//week12-2.cpp 學習計畫 Math 第四題
//LeetCode976.Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());//先排序
        //先練習倒過來的迴圈，把大到小先印出來
        for(int i=nums.size()-1;i>=2;i--){
            //取出nums[i]vs.nums[i-1] nums[i-2]
            if(nums[i]<nums[i-1]+nums[i-2]){
                return nums[i]+nums[i-1]+nums[i-2];
            }
        }
           return 0;
    }
};
