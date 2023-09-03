// hello world

// Question
// Calculate the nth fibonacci number
// 0 1 1 2 3 5 8 13 21
// f(n) = f(n-1) + f(n-2)
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int f1 = 0, f0 = 1;

    for(int i=0; i<n; i++)
    {
        int f2 = f1+f0;
        f0 = f1;
        f1 = f2;
    }
    cout << f1 << endl;
}