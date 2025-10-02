//week04-3.cpp
//LeetCode 學習計畫第7題 66. Plus One
//1 2 3
//    4 最右邊開始，+1完成
//4 3 2 1
//      2最右邊開始，+1完成
//9 4 9
//    0 有進位怎麼辦 不可以return繼續做
//5最右邊 +1完成
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N = digits.size();//陣列的大小
        for (int i=N-1;i>=0;i--)
        {
            if(digits[i]==9)///要進位
            {
               digits[i] = 0;///
            }
            else///不用進位的話直接++
            {
                digits[i]++;
                return digits;
            }
        }
            digits.insert(digits.begin(),1);
            return digits;
    }
};
