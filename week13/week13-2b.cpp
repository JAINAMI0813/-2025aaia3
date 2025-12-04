//week13-2b.cpp 學習計畫 第一題
//21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;
        while(list1 != nullptr && list2 != nullptr){
            if(list1-> val < list2-> val){
                ans2-> next = list1;
                list1 = list1->next;
                ans2 = ans2 -> next;//往右下一筆
            }else{
                ans2->next = list2;
                list2 = list2-> next;
                ans2 = ans2->next;
            }
        }
        if(list1 != nullptr)ans2->next = list1;
        if(list2 != nullptr)ans2->next = list2;
        //先寫四行，熟悉一下資料結構「怎麼new新的」
        return ans->next;
    }
};
