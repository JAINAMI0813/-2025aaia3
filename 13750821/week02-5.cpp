///week02-5.cpp LeetCode �ǲ߭p�e �ĤG�D
///389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        //�����A�έp�@�U 26�Ӧr���A�X�{�X�� ASCII:0-255
        int A[256] = {};//�}�C�ŧi�A�}�C�Τj�A�����w�]��0
        for(int i=0;i<s.length();i++){
            char c = s[i];//����I�Ӧr��
            A[c]++;//�����A��i�������r����l
        }
        for(int i=0;i<t.length();i++){
            char c = t[i];//����I�Ӧr��
            A[c]--;//�q��l�̮��X�r��
            if(A[c] < 0) return c;//�r��������
    }
    return 0;
    }
};
