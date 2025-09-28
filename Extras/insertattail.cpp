SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == nullptr){
        return new SinglyLinkedListNode(data);
    }
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* cu = head;
    while(cu){
        cout << cu->data << endl;
        prev = cu;
        cu = cu->next;
    }
    SinglyLinkedListNode* tail = new SinglyLinkedListNode(data);
    prev->next = tail;
    return head;
}