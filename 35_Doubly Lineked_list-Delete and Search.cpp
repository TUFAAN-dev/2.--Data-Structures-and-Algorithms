#include<iostream>
using namespace std;

struct DNode {int data; DNode *prev, *next;};

class DoublyLL {
      DNode *head, *tail;
public:
      DoublyLL() : head(nullptr), tail(nullptr) {}

      void insertTail(int val) {

      }

      void deleteValue(int val) {
            DNode* cur = head;
            while (cur && cur->data != val) cur = cur->next;
            if (!cur) return;
            if (cur->prev) cur->prev->next = cur->next;
            else head = cur->next;
            if (cur->prev) cur->next->prev = cur->prev;
            else tail = cur->prev;
            delete cur;
      }

      DNode* search(int val) {
            DNode* cur = head;
            while (cur) {
                  if (cur->data==val) return cur; cur=cur->next;
            }
            return nullptr;
      }

      void display() {
            for (DNode* c=head;c;c=c->next) cout << c->data << " "; cout << endl;     
      };
};

int main() {
      DoublyLL list;
      list.insertTail(1); list.insertTail(2); list.insertTail(3);
      list.deleteValue(2);
      list.display();

      return 0;
}