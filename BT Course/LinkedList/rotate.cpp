// KHÔNG sử dụng mảng phụ, viết hàm void rotate(Node* head, int k); xoay danh sách liên kết tại vị trí k (k luôn nhỏ hơn số lượng phần tử của danh sách), như sau:

a0 --> a1 --> ... ak-1 --> ak --> ak+1 --> ... an
Biến đổi thành:

ak --> ak+1 --> ... an --> a0 --> a1 --> ... ak-1

void rotate(Node* &head, int k){
    if(k == 0) return;
    Node* p = head;
    for(int i = 1; i <= k - 1; i++){
        p = p -> next; //a(k-1)
    }
    Node* ak = p -> next;
    p->next = NULL;
    Node* an = ak;
    while(an->next != NULL) an = an->next;
    an->next = head;
    head = ak;
}