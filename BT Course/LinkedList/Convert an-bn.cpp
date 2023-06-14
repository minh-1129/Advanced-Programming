//Cho một struct Node biểu diễn một node của 1 danh sách liên kết đơn như sau:
//struct Node {
//    int value;
//    Node* next;
//};
//Biết danh sách liên kết có dạng:
//a1→a2→...→an→b1→b2→...→bn
//KHÔNG sử dụng thêm mảng phụ, hãy viết hàm Node* convert(Node* head); để chuyển đổi danh sách liên kết trên thành:
//a1→b1→a2→b2→...→an→bn
//Gợi ý: Dùng thêm con trỏ pa trỏ tới a1, pb trỏ tới b1, tìm cách nối a1sang b1, b1sang a2rồi tịnh tiến patrỏ tới a2, pbtrỏ tới b2. Lặp lại đến khi duyệt hết an và bn

int size(Node* head){
    Node* p = head;
    int res = 0;
    while(p != NULL){
        res++;
        p = p->next;
    }
    return res;
}

Node* convert(Node* head){
    if(head == NULL) return NULL;
    int len = size(head);
    Node* pa = head;
    Node* pb = head;
    for(int i = 0; i < len/2; i++){
        pb = pb->next;
    }
    while(pa->next != NULL && pb->next != NULL){
        Node* nextA = pa->next;
        Node* nextB = pb->next;
        pa->next = pb;
        pb->next = nextA;
        //noi an voi nextB
        int tmp = size(nextB);
        for(int i = 0; i < tmp; i++){
            pb = pb->next;
        }
        pb->next = nextB;
        pa = nextA;
        pb = nextB;
    }
    return head;
}
