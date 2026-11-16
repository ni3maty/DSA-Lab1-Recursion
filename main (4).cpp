#include <iostream>
using namespace std;

long long factorialRecursive(int n) {
if (n == 0 || n == 1) {
return 1;
}
return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) {
long long result = 1;

for (int i = 2; i <= n; i++) {
result *= i;
}

return result;
}

int main() {
int n;
cout << "Enter a number: ";
cin >> n;

if (n < 0 || n > 20) {
cout << "Enter a number from 0 to 20." << endl;
return 0;
}

cout << "Recursive factorial: "
<< factorialRecursive(n) << endl;

cout << "Iterative factorial: "
<< factorialIterative(n) << endl;

return 0;
}

