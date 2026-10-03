#include<iostream>
using namespace std;

struct Node{
      int data;
      Node* next;
      Node(int d) : data(d), next(nullptr) {}
};

class SinglyLL {
public:
      Node* head;
      SinglyLL() : head(nullptr) {}

      void insertTail(int val) {
            Node* n = new Node{val, nullptr}
            if (!head) head = n;
            else {
                  Node* cur = head;
                  while (cur->next) 
                        cur = cur->next;
                        cur->next = n;
            }
      };

      void deleteValue(int val) {
            Node **indirect = &head;
            while (*indirect && (*indirect)->data != val)
                  indirect = &((*indirect)->next);
            if (*indirect) {
                  Node* temp = *indirect;
                  *indirect = (*indirect)->next;
                  delete temp;
            }
      };

      void update(int oldval, int newval) {
            Node* n = search(oldval);
            if (n) n->data = newval;
      };

      Node* search(int val) {
            Node* cur = head;
            while (cur) {
                  if (cur->data==val) return cur; cur=cur->next;
                  }
                  return nullptr;
      };

      void display() {
            for (Node* c=head;c;c=c->next) 
            cout << c->data << " ";
            cout << endl;
      };

};

int main() {
      SinglyLL list;
      list.insertTail(5);
      list.deleteValue(10);
      list.update(5,50);
      list.display();
      return 0;
}
