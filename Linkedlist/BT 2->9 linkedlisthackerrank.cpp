//Insert a Node at the Tail of a Linked List
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head==NULL){
        head = new SinglyLinkedListNode(data);
    }else{
        SinglyLinkedListNode *tail = head;
        while(tail->next!=NULL)tail = tail->next;
        tail->next = new SinglyLinkedListNode(data);
    }
    return head;
}
//Insert a node at a specific position in a linked list
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    if(head == NULL && position > 0) return NULL;
    else{
        SinglyLinkedListNode *NodeInsert = head;
        int i = 0;
        while(NodeInsert->next!=NULL && i < position - 1){
            NodeInsert = NodeInsert->next;
            i++;
        }
        if(i == position - 1)
        {
            SinglyLinkedListNode *NodeInsert1 = new SinglyLinkedListNode(data);
            SinglyLinkedListNode *NodeNext = NodeInsert->next;
            NodeInsert->next = NodeInsert1;
            NodeInsert1->next = NodeNext;
        }
        return head;
    }
        
}
//Delete a Node
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    
    if(head != NULL)
    {
        if(position == 0) return head->next;
        SinglyLinkedListNode* BeforeNode = head;
        int i = 0;
        while(BeforeNode->next != NULL && i < position - 1)
        {
            BeforeNode = BeforeNode->next;
            i++;
        }
        if(i == position - 1 && BeforeNode ->next != NULL){
        SinglyLinkedListNode* deleteNode = BeforeNode->next;
        BeforeNode->next = deleteNode->next;
        delete deleteNode;
        }
        
    }
    return head;
}
//Print in Reverse
void reversePrint(SinglyLinkedListNode* head) {
    stack<int> print;
    for(SinglyLinkedListNode* p = head; p!= NULL; p = p->next){
        print.push(p->data);
    }
    while(!print.empty()){
        cout<<print.top()<<endl;
        print.pop();
    }
}
//Reverse a linked list
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = NULL; 
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* Next = NULL;
    while(current != NULL){
        Next = current->next;
        
        current->next = prev;
        prev = current;
        current = Next;
    }
    
    return prev;
}
//Compare two linked lists
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* ptr1 = head1;
    SinglyLinkedListNode* ptr2 = head2;
    while(ptr1->next != NULL && ptr2->next != NULL)
    {
        if(ptr1->data != ptr2->data) return false;
        else{
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    if(ptr1->next != NULL||ptr2->next !=NULL) return false;
    return true;

}
//Merge two sorted linked lists
SinglyLinkedListNode* Reverse(SinglyLinkedListNode* &head) {
    SinglyLinkedListNode* prev = NULL; 
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* Next = NULL;
    while(current != NULL){
        Next = current->next;
        
        current->next = prev;
        prev = current;
        current = Next;
    }
    
    return prev;
}
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* head = NULL;
    SinglyLinkedListNode* rev1 = Reverse(head1);
    SinglyLinkedListNode* rev2 = Reverse(head2);
    while(rev1 != NULL && rev2 != NULL)
    {
        if(rev1->data >= rev2->data)
        {
            SinglyLinkedListNode* tmp = rev1->next;
            rev1->next = head;
            head = rev1;
            rev1 = tmp;
        }
        else{
            SinglyLinkedListNode* tmp = rev2->next;
            rev2->next = head;
            head = rev2;
            rev2 = tmp;
        }
    }
    while(rev1 != NULL){
        SinglyLinkedListNode* tmp = rev1->next;
        rev1->next = head;
        head = rev1;
        rev1 = tmp;
        
    }
    while(rev2 != NULL){
        SinglyLinkedListNode* tmp = rev2->next;
        rev2->next = head;
        head = rev2;
        rev2 = tmp;
    }
    return head;
    

}
//Get Node Value
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int len = 0;
    for(SinglyLinkedListNode* p = llist; p != NULL; p = p->next)
    {
        len++;
    }
    int index = 0;
    for(SinglyLinkedListNode* p = llist; p != NULL; p = p->next){
        if(index == len - 1 - positionFromTail)
        {
            return p->data;
        }
        index++;
    }
    return -1;
      
}


