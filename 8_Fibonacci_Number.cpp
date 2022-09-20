#include<bits/stdc++.h>
using namespace std;

//T = O(2^n)
int fib(int n){
    if(n <= 1) return n;
    int last = fib(n-1);
    int secondLast = fib(n-2);
    return last + secondLast;
}

int main() {
    int n;
    cin >> n;
    cout << fib(n);

  /*
  Basic Method
  if (n == 0) {
    cout << 0;
  } else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
  } else {
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i <= n; i++) {
      fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
    for (int i = 0; i <= n; i++) {
      cout << fib[i] << " ";
    }
  }*/

}