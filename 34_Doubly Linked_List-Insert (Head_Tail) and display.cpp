#include<iostream>
using namespace std;

struct DNode {int data; DNode *prev, *next;};

class DoublyLL {
      DNode *head, *tail;
public:
      DoublyLL() : head(nullptr), tail(nullptr) {} 

      void insertHead(int val) {
            DNode* n = new DNode{val, nullptr, head};
            if (head) head->prev = n;
            else tail = n;
            head = n;
      }

      void insertTail(int val) {
            DNode* n = new DNode{val, nullptr};
            if (tail) tail->next = n;
            else head = n;
            tail = n;
      }

      void display() {
            for (DNode* c=head;c; c-c->next) cout << c->data << " ";
            cout << endl;
      }
};

int main() {
      DoublyLL list;
      list.insertHead(10);
      list.insertTail(20);
      list.insertHead(5);
      list.display();

      return 0;
}
