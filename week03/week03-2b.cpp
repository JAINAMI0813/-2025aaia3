//week03-2b.cpp 璶糶ㄢΩ
//LeetCode 厩策璸礶材肈 1822. Sign of the Product of an Array
//р皚癬ㄓ琌タ计璽计临琌0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans=1;// 0 ヴ计常穦跑Θ0Τ1程或跑或
        for(int i=0;i<nums.size();i++){//Τ碭计癹伴禲碭Ω
            if(nums[i]>0)ans *=+1;
            if(nums[i]<0)ans *=-1;
            if(nums[i]==0)ans *=0;
            //ans *=nums[i];//–Ωр nums[i]秈ans柑
        }//计禫ㄓ禫1000计碞脄┮祘Α岿
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0 ;
    }
};
