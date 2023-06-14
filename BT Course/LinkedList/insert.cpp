// Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm Node* insertTail(Node* head, int value); thêm một node có giá trị là value vào cuối của danh sách liên kết. Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm.
Node* insertTail(Node* head, int value){
    Node* p = head;
    if(head == NULL){
        Node* newhead = new Node;
        newhead ->value = value;
        return newhead;
    }
    while(p->next != NULL){
        p = p ->next;
    }
    Node* newnode = new Node;
    newnode -> value = value;
    p -> next = newnode;
    return head;
}
//Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm Node* insertHead(Node* head, int value); thêm một node có giá trị là value vào đầu của danh sách liên kết. Hàm trả về con trỏ trỏ tới node đầu của danh sách liên kết sau khi đã thêm.
Node* insertHead(Node* head, int value){
    Node* newhead = new Node;
    newhead->value = value;
    newhead -> next = head;
    return newhead;
}