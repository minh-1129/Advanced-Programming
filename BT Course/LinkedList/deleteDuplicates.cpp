// Biết head là con trỏ trỏ tới một danh sách liên kết chưa được sắp xếp. Viết hàm Node* deleteDuplicates(Node* head); xoá các node trùng lặp khỏi danh sách liên kết, chỉ giữ lại lần xuất hiện đầu tiên. Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã xoá.
Node* deleteDuplicates(Node* head){
    Node* ptr1 = head;
    Node* ptr2 = head;
    Node* dup = new Node;
    
    while(ptr1 != NULL && ptr1 -> next != NULL){
        ptr2 = ptr1;
        while(ptr2->next != NULL){
            if(ptr2->next->value == ptr1->value){
                dup = ptr2->next;
                ptr2->next = ptr2->next->next;
                delete dup;
            }
            else ptr2 = ptr2->next; //gia su co 3 gia tri giong nhau x1 x2 x3 thi neu ko else se xoa x2 va nhay sang x3 va ko ktra duoc x3
        }
        ptr1 = ptr1->next;
    }
    return head;
}