///week05-2.cpp
///熟悉stringstream
#include <iostream>/// cin,cout,getline 讀寫資料
#include <sstream> /// stringstream 需要他
#include <string> ///我們的字串 string
using namespace std;///這行容易忘記加
int main(){
    cout << "請輸入一段英文，裡面可有空格:";
    string s;/// 字串s
    getline(cin,s);///一次讀入一整行，放入s
    cout << "獨到s字串:" << s << endl;

    stringstream ss(s);///將字串 s 變成 ss
    string word;///字串word
    while(ss >> word){
        cout << "有一個字:" << word << endl;
    }



}
