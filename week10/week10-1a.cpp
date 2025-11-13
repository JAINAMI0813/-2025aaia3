//week10-1a.cpp 寫兩次第一次用for迴圈
//1523. Count Odd Numbers in an Interval Range
//從low...high裡面有幾個od奇數
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for(int i=low;i<=high;i++){
            if(i%2==1)ans++;//奇數
        }
        return ans;
    }
};
