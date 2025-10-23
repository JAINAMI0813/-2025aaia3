///week07-2.cpp 像畫星星一樣
///畫出超大的正方型，數字包起來
///TAICA
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;///part 1 :Input
    cin >> n;

    for(int i=1;i<n*2;i++){
        for(int j=1; j<n*2;j++){
            int d = max(abs(i-n),abs(j-n));
            cout << d + 1;///cout << n;
        }
        cout  << endl;///樓層的概念
    }
}
