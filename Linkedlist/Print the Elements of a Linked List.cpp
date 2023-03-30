void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* p = head;
    if(head->data != NULL){
        while(p->next != NULL){
            cout<<p->data<<endl;
            p = p->next;
        }
        cout<<p->data<<endl;
    }
