#include <iostream>
using namespace std;

long long fibonacciRecursive(int n) {
if (n <= 1) {
return n;
}
return fibonacciRecursive(n - 1)
+ fibonacciRecursive(n - 2);
}

long long fibonacciIterative(int n) {
if (n <= 1) {
return n;
}

long long a = 0, b = 1;

for (int i = 2; i <= n; i++) {
long long next = a + b;
a = b;
b = next;
}

return b;
}

int main() {
int n = 10;

cout << "n = " << n << endl;
cout << "Recursive Fibonacci = "
<< fibonacciRecursive(n) << endl;
cout << "Iterative Fibonacci = "
<< fibonacciIterative(n) << endl;

return 0;
}

