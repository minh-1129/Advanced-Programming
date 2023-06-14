// Cho một struct Node biểu diễn một node
//  của 1 danh sách liên kết đơn như sau:

// struct Node {
//     int value;
//     Node *next;
// };
// Biết head là con trỏ trỏ tới một danh sách liên kết đã được sắp xếp (tăng hoặc giảm) theo giá trị các node, viết hàm Node* insert(Node* head, int value); chèn một node có giá trị value vào danh sách liên kết sao cho danh sách liên kết giữ nguyên tính sắp xếp. Hàm trả về con trỏ trỏ tới vị trí đầu tiên của danh sách liên kết sau khi đã chèn.

// Lưu ý: danh sách có ít hơn 2 phần tử được tính là tăng.

Node* insert(Node* head, int value){
    if(head == NULL){
        head = new Node;
        head-> value = value;
        return head;
    }
    bool tang = true;
    Node* p = head;
    if(p -> next != NULL && p->next->value < p->value) tang = false;
    if((value < p-> value && tang == true)|| (value > p->value && tang == false))
    {
        Node* newnode = new Node;
        newnode ->value = value;
        newnode ->next = head;
        return newnode;
    }
    
        
    if(tang){
        while(p->next != NULL && p-> next->value < value) p = p->next;
    }
    else{
        while(p->next != NULL && p-> next->value > value) p = p->next;
    }
    Node* newnode = new Node;
    newnode ->value = value;
    Node* tmp = p->next;
    p -> next = newnode;
    newnode->next = tmp;
    return head;
   }
