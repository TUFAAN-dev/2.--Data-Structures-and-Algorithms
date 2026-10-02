#include<iostream>
using namespace std;

struct Node {int data; Node* next;};

class SinglyLL {
      Node* head;
public:
      SinglyLL(): head(nullptr) {}
      void insertTail(int val) {
            Node* n = new Node{val, nullptr};
            if (!head) head = n;
            else {
                  Node* cur = head;
                  while (cur-> next) cur = cur->next;
                  cur->next = n;
            }
      }

      Node* search(int key) {
            Node* cur = head;
            while (cur) {
                  if (cur->data==key) 
                        return cur;
                        cur=cur->next;
            }
            return nullptr;
      }

      void display() {
            for (Node* cur=head;cur;cur=cur->next)
            cout << cur->data<<" ";
            cout << endl;
      }

      ~SinglyLL() {
            while(head) {
                  Node* t=head;
                  head = head->next;
                  delete t;
            }
      }
};

int main() {
      SinglyLL list;
      list.insertTail(10); list.insertTail(20);
      list.display();
      cout << (list.search(20)?"Found":"Not found") << endl;
      return 0;
}