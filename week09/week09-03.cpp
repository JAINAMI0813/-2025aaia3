/// week09-03.cpp 學習計畫 Matrix 第3題
/// LeetCode 54. Spiral Matrix  請你一值用LeetCode AI助手 Leet
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int up = 0, down = M - 1, left = 0, right = N - 1;
        ///先把上下左右的編結，都宣告一個變數初始值
        vector<int> ans;
        while (up <= down && left <= right) {
            // 向右遍歷（上邊界）
            for (int i = left; i <= right; i++) /// 往右
            {
                ans.push_back(matrix[up][i]);
            }
            up++; ///AI助手說，要寫 up++ 上邊界內縮

            ///向下
            for (int i = up; i <= down; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--; ///AI助手說，是右邊界內縮

            // (倒過來的迴圈)往左
            if (up <= down) {  /// 邊界超過範圍、交叉，沒辦法繼續喔！！！
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }

            // (倒過來的迴圈)往上
            if (left <= right) { // (倒過來的迴圈) 往上
                for (int i = down; i >= up; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
