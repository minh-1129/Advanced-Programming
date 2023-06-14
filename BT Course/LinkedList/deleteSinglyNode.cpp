Cho một struct Node biểu diễn một node
 của 1 danh sách liên kết đơn như sau:

struct Node {
    int value;
    Node *next;
};
// Biết head là con trỏ trỏ tới một danh sách liên kết có tối thiểu 3 phần tử đã được sắp xếp tăng dần theo giá trị các node. Trong đó có một node cô đơn - chỉ xuất hiện đúng một lần. KHÔNG sử dụng mảng phụ, viết hàm Node* deleteSingle(Node* head); xoá node cô đơn khỏi danh sách liên kết. Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã xoá.

For example:

Input	Result
5
2 2 3 4 4   2 2 4 4

Node* deleteSingle(Node* head){
    Node* prev = NULL;
    Node* curr = head;
    Node* NEXT = head->next;
    while(curr != NULL){
        if(! ((prev != NULL && prev->value == curr->value) || (NEXT != NULL && NEXT->value == curr->value))){
            if(prev != NULL){
                prev ->next = prev->next->next;
                Node* tmp = curr; delete tmp;
                break;
            }
            else{
                Node* newhead = head->next;
                delete head;
                return newhead;
            }
        }
        else{
            prev = curr;
            curr = NEXT;
            NEXT = NEXT->next;
        }
        
    }
    return head;
}
