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
            }

            void deleteValue(int val) {
                  Node **indirect = &head;
                  while (*indirect && (*indirect)->data != val)
                        indirect = &((*indirect)->next);
                  if 
                        delete temp;
            }
      }
}