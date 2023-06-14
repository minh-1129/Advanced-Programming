//3
// Cho cấu trúc một nút trong cấu trúc danh sách liên kết như bên dưới:

// struct Node
//     int value;
//     Node *nextNode;
// };
// Bạn hãy viết hàm Node* moveFirst2Last(Node* head)  để chuyển nút đầu tiên của danh sách liên kết xuống cuối cùng, hàm trả về danh sách liên kết mới *head.

Node* moveFirst2Last(Node* head){ 
    if(head == NULL || head->nextNode == NULL) return head;
    Node* p = head;
    Node* newhead = head->nextNode;
    while(p -> nextNode != NULL){
        p = p->nextNode;
    }
    p->nextNode = head;
    head->nextNode = NULL;
    return newhead;
    