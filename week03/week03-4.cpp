//week03-4.cpp
//LeetCode 挑戰題(傳金幣額) 120. Triangle 找到最上面往下走的最小質
class Solution {//使用「動態規劃」慢慢更新陣列就好了
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //triangle[i][j]第i層的J個數
        int N = triangle.size();//總共有幾層
        //從下往上查，最下層N-1層就是本身最小值所以N-2往上更新
        for(int i=N-2;i>=0;i--){//倒過來的迴圈，從N-2往上
            for(int j=0;j<=i;j++){//從左到右第i層有0...I個數都要更新
                triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
