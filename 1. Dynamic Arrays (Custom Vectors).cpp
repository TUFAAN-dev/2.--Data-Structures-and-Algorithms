#include<iostream>
using namespace std;

class DynamicArray {
      int* data;
      int size, capacity;
      
      void resize() {
            capacity *= 2;
            int* newData = new int[capacity];
            for (int i = 0; i < size; ++i) newData[i] = data[i];
            delete[] data;
            data = newData;
      };
public: 

      DynamicArray(int cap = 4) : size(0), capacity(cap) {data = new int[capacity];}
      ~DynamicArray() {delete[] data;}

      void push_back(int val) {
            if (size == capacity) resize();
            data[size++] = val;
      }

      void pop_back() {if (size) --size;}

      int search(int val) {
            for (int i = 0; i < size; ++i) if (data[i] == val) return i;
            return -1;
      }

      void update(int idx, int val) {if (idx >= 0 && idx < size) data[idx] = val;}

      void display() {
            for (int i = 0; i < size; ++i) cout << data[i] << " ";
            cout << endl;
      }

};

int main() {
      DynamicArray arr;

      arr.push_back(10); arr.push_back(20); arr.push_back(30);
      arr.display();
      arr.update(1, 25);
      arr.display();
      
      cout << "Index of 25: " << arr.search(25) << endl;
      arr.pop_back();
      arr.display();

      return 0;
}