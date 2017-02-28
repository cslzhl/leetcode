struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *newhead = new ListNode(-1);
        if(head == nullptr) return head;
        while(head !==nullptr){
            ListNode *tmp = head;
            head = head->next;
            tmp->next = newhead->next;
            newhead->next = tmp;
        }
        return newhead->next;
    }
};
