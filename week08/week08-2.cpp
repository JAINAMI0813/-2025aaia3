//week08-2.cpp Leetcode學習計畫 Martix矩陣第四題
//73. Set Matrix Zeroes
//要先讀完 先讀完再設0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第一階段記下全部0對應的i和j
        int M = matrix.size(),N = matrix[0].size();//左手M,右手N
        vector<int> markI(M,0),markJ(N,0);//宣告c++的陣列 長度分別為M、N
        for(int i=0;i < matrix.size();i++){
            for(int j=0;j < N;j++){
                if(matrix[i][j]==0){
                    markI[i] = 1;//標記一下i的造型橫條，等一下清為0
                    markJ[j] = 1;//標記一下J的造型橫條，等一下清為0
                }
            }
        }
        for(int i = 0;i < M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==1 ||markJ[j]==1)matrix[i][j] = 0;
            }//如果有標記 再把它對應的項變成0
        }
    }
};
