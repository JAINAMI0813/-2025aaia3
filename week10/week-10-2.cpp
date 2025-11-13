//week-10-2.cpp(埃程 程キА羱)
//Leetcode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0;
        int N =salary.size();//羆ΤN
        int M = salary[0],m = salary[0];//р材0
        for(int i=0;i<N;i++){
            total += salary[i];
            if(salary[i]>M) M = salary[i];//ゑ程 程传
            if(salary[i]<m) m = salary[i];//ゑ程 程传
        }
        //
        return(total-M-m)/(N-2);
    }
};
