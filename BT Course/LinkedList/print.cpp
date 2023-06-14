//Biết head là con trỏ trỏ tới node đầu tiên của danh sách liên kết, viết hàm void print(Node* head); in ra giá trị các phần tử của danh sách liên kết trên cùng một dòng, cách nhau bởi 1 dấu cách.
void print(Node* head){
    if(head != NULL) cout<<head->value<<" ";
    else return;
    print(head->next);
    
}
//KHÔNG sử dụng mảng phụ, viết hàm void printLast(Node* head, int k); in ra k giá trị cuối cùng của danh sách liên kết, các giá trị cách nhau bởi dấu cách (k luôn nhỏ hơn hoặc bằng số lượng phần tử của danh sách).
void printLast(Node* head, int k){
    Node* p = head;
    int len = 0;
    while(p != NULL){
        p = p->next;
        len++;
    }
    Node* p1 = head;
    for(int i = len; i > 0; i--){
        if(i <= k) cout<<p1->value<<" ";
        p1 = p1->next;
    }
}
//KHÔNG sử dụng mảng phụ, viết hàm void printReverse(Node* head, int k); in ra k giá trị đầu tiên của danh sách liên kết theo chiều ngược, các giá trị cách nhau bởi dấu cách (k luôn nhỏ hơn hoặc bằng số lượng phần tử của danh sách).
void printReverse(Node* head, int k){
    if(k <= 0 || head == NULL) return;
    
    printReverse(head->next, k -1);
    cout<<head->value<<" ";
}
