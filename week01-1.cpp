//week01-1
//Leecode 28. Find the Index of the First Occurrence in a String
//�bhaystack���_���̧�� needle �w(�j�����w)
//haystack: sadbutsad
//needle:   sad i:0
//          sad i:1
//           sad i:2
//             sad i:3
//              sad i:4
//                sad i:5
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(),N = needle.length();//�r�ꪺ����
        for(int i=0 ; i<=H-N ; i++){//9-3=6
        //SUBSTR(�}�l�A����)�������r��
            if(haystack.substr(i, N) == needle)return i;//��쵪��
        }
        return -1;//�j���ح� �䤣��needle�N����
    }
};
