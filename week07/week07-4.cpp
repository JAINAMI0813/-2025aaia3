//week07-4.cpp 學習計畫 simulation 模擬第四題
//1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions+ instructions+instructions;
        cout << instructions;
        int x=0,y=0;//x座標 y座標
        int d = 0;//d:方向direction 0:北 1:東 2:南 3:西
        //右轉d = (d+1)%4
        //左轉 d = (d-1+4)%4=(d+3)%4
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};//近兩行是「地圖2D模擬的精華」，決定前進多少
        for (char c:instructions){
            if(c=='G'){
                x += dx[d];
                y += dy[d];
            }else if(c=='R'){
                d = (d+1)%4;
            }else if(c=='L'){//左轉
                d = (d+3)%4;
            }
        }
        cout << 'x' << x << 'y' << y << endl;
        if(x==0 && y==0 )return true;
        else return false;
    }
};
