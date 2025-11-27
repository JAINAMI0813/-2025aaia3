//week12-3.cpp 厩策璸礶 MATH 计材肈
//LeetCode 43. Multiply Strings ノ﹃家览猭
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return"0";
        int N1 = num1.length(),N2 = num2.length();
        vector<int> ans(N1+N2);//程N1+N2
        for(int i=N1-1;i>=0;i--){//ㄢ糷忌for癹伴
            for(int j=N2-1;j>=0;j--){
                //num[i] vs.num2[j]璶癘眔рダ跑计
                ans[i+j+1] +=(num1[i]-'0')*(num2[j]-'0');
                if(ans[i+j+1]>9) ans[i+j] += ans[i+j+1]/10;
                ans[i+j+1] = ans[i+j+1]%10;//緇计
            }
        }
        string strANS;
        if(ans[0]==0){
            for(int i=1;i<N1+N2;i++){
                strANS += (char)(ans[i]+'0');
            }
        }else{
            for(int i=0;i<N1+N2;i++){
                strANS +=(char)(ans[i]+'0');
            }

        }
        return strANS;
    }
};
