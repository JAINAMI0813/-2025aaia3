/// week06-03a.cpp
/// LeetCode 學習計畫 第一題 模擬 682. Baseball Game

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a;
        for (string op : operations) /// C++ 的進階迴圈
        {
            /// cout << op < "\n" ; /// 試試看，會印出什麼東西
            if (op[0] == "+") ///把末兩數相加，再塞回去
            {
            }
            else if (op[0]=='D') /// 複製最後1為，再塞回去
            {
            }
            else if (op[0]=='C') /// 吐掉最後1位
            {}
            else /// 把stoi(op) 整數，塞回去
            {}
        }
        /// 最後，用for迴圈，把陣列 a 的值，全部加起來
        int ans = 0;
        for (int now : a) ///C++進階迴圈，也可以用for (int i=0; i<a.size(); i++){ int now=a[i]}
        {
            ans += now;
        }
        return 0; ///先隨便 return 0 等一下再改。
    }
};
    }
};
