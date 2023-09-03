// hello world


// Question
// Calculate sum of first n natural numbers
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum_while = 0;

    int i=1;  // initialization
    while (i<=n) // Condition
    {
        sum_while = sum_while+i;  //Statement
        i++; // Iteration
    }

    cout << sum_while << endl;

    int sum_for = 0;
    for (int i=1; i<=n; i++){
        sum_for = sum_for+i;
    }

    cout << sum_for << endl;
}