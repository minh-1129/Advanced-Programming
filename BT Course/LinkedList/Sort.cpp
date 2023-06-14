Cho một class Node biểu diễn một node
 của 1 danh sách liên kết đôi như sau:

class Node {
    int value;
public:
    Node* next;
    Node* prev;
    int getValue() {
        return value;
    }
};
Biết head là con trỏ trỏ tới một danh sách liên kết, viết hàm Node* sort(Node* head); sắp xếp danh sách liên kết theo thứ tự tăng dần. Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã sắp xếp.

Gợi ý: sử dụng thuật toán sắp xếp chèn

void InsertionSort(Node* &head, Node* &newNode){
    if(head == NULL) head = newNode;
    else if((*head).getValue() >= (*newNode).getValue()){
        newNode->next = head;
        newNode->next->prev = newNode;
        head = newNode;
    }
    else{
        Node* current = head;
        while(current->next != NULL && (*(current->next)).getValue() < (*newNode).getValue()){
            current = current->next;
        }
        newNode->next = current->next;
        if (current->next != NULL)  newNode->next->prev = newNode;
        current->next = newNode;
        newNode->prev = current;
    }
    
}
Node* sort(Node* head){
    Node* res = NULL;
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        current->prev = current->next = NULL;
        InsertionSort(res, current);
        current = next;
    }
    return res;
}