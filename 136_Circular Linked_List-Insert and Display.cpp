#include<iostream>
using namespace std;

struct CNode {
      int data;
      CNode* next;
};

class CircularSinglyLL {
      CNode* tail;
public:
      CircularSinglyLL() : tail(nullptr) {}

      void insert(int val) {
            CNode* n = new CNode{val, nullptr};
            if (!tail) {
                  tail = n;
                  tail->next = tail;
            } else {
                  n->next - tail->next;
                  tail->next = n;
                  tail = n;
            }
      };

      void display() {
            if (!tail) return;
            CNode* start = tail->next;
            do {
                  cout << start->data << " ";
                  start = start->next;
            } while (start != tail->next);

            cout << endl;
      }
};


int main() {
      CircularSinglyLL list;
      list.insert(10);
      list.insert(20);
      list.insert(30);
      list.display();

      return 0;
}