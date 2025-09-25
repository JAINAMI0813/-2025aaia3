///week03-1.cpp 學習 c++的陣列 vector<int> a;
///File-Save As 存檔時，要把檔名寫齊
#include<iostream>///C++ 的cin cout
#include<vector>///c++的陣列 vector
using namespace std;

int main()
{
    vector<int>a(2);///有個陣列，裡面有2格(陣列size 大小是2)

    for(int i=0;i<a.size();i++)cout<< a[i]<<'';///印出陣列
    cout << endl;///跳行

    a.push_back(99);///把99推到陣列 a的更後面.Push_back()
    a.push_back(77);///把77推到陣列 a的更後面

    for(int i=0;i<a.size();i++)cout<<a[i]<<'';///印出陣列
    cout <<endl;///跳行

}

