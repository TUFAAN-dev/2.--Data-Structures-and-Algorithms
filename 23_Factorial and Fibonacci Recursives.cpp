#include <iostream>
using namespace std;

long long fact(int n) { return (n<=1) ? 1 : n*fact(n-1); }
int fib(int n) { return (n<=1) ? n : fib(n-1) + fib(n-2); }

int main() {
      cout << fact(5) << " " << fib(7) << endl;
      return 0;
}

