///week05-3b.cpp  Part2:Output
///Part 3: stringstream part4:reverse反過來
///CPE 第二題 UVA 483 倒過來
#include <iostream>
#include <sstream>///Part 3: stringstream 的檔案是 sstream
#include <algorithm> ///part 4: reverse 的演算法
using namespace std;
int main(){
    string line;///一行字的字串 part1: input
    while (getline(cin,line)){///讀進來
        stringstream ss(line);///part 3:用stringstream斷字
        string word;///字放這裡
        while( ss >> word ){///part3: 用ss斷字
            reverse(word.begin(),word.end());///part4
            cout << "讀到了" << word << endl;///part3
        }
            cout << line <<endl;///part2 : output
    }
}
