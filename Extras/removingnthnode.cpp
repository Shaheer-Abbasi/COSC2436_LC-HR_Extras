class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return nullptr;
        }
        
        int size = 0;
        ListNode* cu = head;
        while(cu != nullptr){
            size++;
            cu = cu->next;
        }
        
        int positionFromStart = size - n;
        
        if(positionFromStart == 0){
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        cu = head;
        for(int i = 0; i < positionFromStart - 1; i++){
            cu = cu->next;
        }
        
        ListNode* toBeDeleted = cu->next;
        cu->next = cu->next->next;
        delete toBeDeleted;
        
        return head;
    }
};