void printLinkedList(SinglyLinkedListNode* head) {
    if(head == nullptr){
        return;
    }
    SinglyLinkedListNode* cu = head;
    while(cu != nullptr){
        cout << cu->data << endl;
        cu = cu->next;
    }
}