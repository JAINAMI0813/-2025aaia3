//week13-1.cpp 聖誕倒數寫程式Advent of Code 2025 第一天第一題
//Moodle 點擊 adventofcode.com 網址 可看到黑底白字的題目
//在leetcode 的 my playgroung 我的遊戲場，可以寫程式
//右下角 stdin 可貼上你的程式input
int main() {
    char c;
    int d;
    int now = 50;
    int ans = 0;
    while(cin >> c >> d){//一直讀資料:讀字母、讀數字
        //if(c=='L') cout <<"往左轉" << d << "格\n";
        //if(c=='R') cout <<"往右轉" << d << "格\n";
        if(c=='L') now = now - d;
        if(c=='R') now = now + d;

        now = (now%100 + 100)%100;
        //cout << "現在的刻度是: "<< now <<"\n";
        if(now==0) ans++;
    }
    cout << "答案是:" <<ans;
}
