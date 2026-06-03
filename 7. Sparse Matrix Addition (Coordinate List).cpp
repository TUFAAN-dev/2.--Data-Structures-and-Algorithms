#include <iostream>
#include <vector>
using namespace std;

struct Element {int r, c, v;};
vector <Element> addSparse(const vector <Element>&A, const vector <Element>& B) {
      
      vector <Element> res;
      size_t i = 0, j = 0;
      while (i < A.size() && j < B.size()) {
            if (A[i].r == B[j].r && A[i].c == B[j].c) {
                  int sum = A[i].v + B[j].v;
                  if (sum) res.push_back({A[i].r, A[i].c, sum});
                  ++i, ++j;
            }
            else if (A[i].r < B[j].r || (A[i].r == B[j].r && A[i].c < B[j].c)) { res.push_back(A[i++]); }
            else { res.push_back(B[j++]); }
      };

      while (i < A.size()) res.push_back(A[i++]);
      while (j < B.size()) res.push_back(B[j++]);

      return res;
}

int main() {
      vector<Element> A = {{0,0,5}, {1,2,10}};
      vector<Element> B = {{0,0,3}, {2,2,7}};

      auto C = addSparse(A,B);
      for (auto& e : C) cout << "(" << e.r << "," << e.c << ")=" << e.v << " ";
      cout << endl;

      return 0;
}