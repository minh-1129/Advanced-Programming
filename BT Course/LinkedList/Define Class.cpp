Cho sẵn các định nghĩa của  struct Node biểu diễn một node
 của class LinkedList biểu diễn một danh sách liên kết đơn như sau:

struct Node {
    const int value; // Hằng thành viên
    Node* next;
    Node(int value); // Hàm khởi tạo nhận vào một giá trị nguyên value.
};

class LinkedList {
    Node *head;
public:
    LinkedList(); // Hàm khởi tạo danh sách liên kết rỗng.
    LinkedList(int a[], int n); // Hàm khởi tạo danh sách liên kết từ một mảng a có n phần tử.
    void insertHead(int value); // Hàm chèn một node có giá trị value vào đầu danh sách liên kết.
    void print(); // Hàm in các phần tử của danh sách liên kết lên màn hình, cách nhau bởi dấu cách.
};

//Cài đặt các hàm thành viên của struct Node và class LinkedList.

Node::Node(int value): value(value) {
    this->next = NULL;
}
LinkedList::LinkedList(){
    head = NULL;
}
LinkedList::LinkedList(int a[], int n){
    if(n == 0) head = NULL;
    else{
        head = new Node(a[0]);
        Node* p = head;
        for(int i = 1; i < n; i++){
            Node* tmp = new Node(a[i]);
            p-> next = tmp;
            p = p->next;
        }
    }
}
void LinkedList::insertHead(int value){
    Node* tmp = new Node(value);
    tmp -> next = head;
    head = tmp;
}
void LinkedList::print(){
    Node* p = head;
    while(p != NULL){
        cout<<p->value<<' ';
        p = p->next;
    }
}