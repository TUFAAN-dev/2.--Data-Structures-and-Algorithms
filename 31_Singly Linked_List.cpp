#include<iostream>
using namespace std;

struct Node {int data ; Node* next;};

class SinglyLL {
public:
      Node* head;
      SinglyLL() : head(nullptr) {}
      void insertAtHead(int val) {
            Node* n = new Node{val, head};
            head = n;
      }

      void display() {
            for (Node* cur=head; cur; cur=cur->next)
                  cout << cur->data << " ";
            cout << endl;
      }
};

int main() {
      SinglyLL list;
      list.insertAtHead(10);
      list.insertAtHead(20);
      list.display();

      return 0;
}