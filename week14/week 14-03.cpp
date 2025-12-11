/// week 14-03.cpp 學習計畫第4題
/// LeetCode 445. Add Two Numbers II

class Solution {
public:
    ListNode* myReverse(ListNode* head) { // 自訂函式(剛寫過week14-2.cpp)
        if (head==nullptr || head->next==nullptr) return head; // 終止條件
        ListNode* ans = myReverse(head->next); // 函式呼叫函式
        head->next->next = head; // 把前面, 最後到反過來的最後面
        head->next = nullptr;
        return ans;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1); // 反過來
        ListNode* list2 = myReverse(l2); // 反過來

        ListNode* ans = myAddTwoNumbers(list1, list2); // 呼叫上週的 week13-??.cpp
        return myReverse(ans); // 反過來
    }
    // 還缺 myAddTwoNumbers() 函式 要把它寫出來
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999); // 隨便的 dummy, 答案會放在 dummy 的右邊
        ListNode* ans2 = ans; // 負責貯存 ans
        int carry = 0; // 進位
        while (list1 != nullptr || list2 != nullptr) {
            int now = carry; // 現在要處理的位數

            if (list1 != nullptr) { // 加入值
                now += list1->val; // 加入值
                list1 = list1->next; // 換下一筆，待命
            }

            if (list2 != nullptr) { // 加入值
                now += list2->val; // 加入值
                list2 = list2->next; // 換下一筆，待命
            }

            ans2->next = new ListNode(now % 10); // 記下「個位數」
            carry = now / 10; // 進位的部分
            ans2 = ans2->next; // 換下一筆
        }
        // (差一點點) 才有處理進位喔!!!!
        if (carry>0) ans2->next = new ListNode(carry); /// (差一點點)忘了處理進位喔！！！
        return ans->next;
    }
};
