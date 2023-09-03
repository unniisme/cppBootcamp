// Question
// Print the first n even numbers
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int i=0;
    while (i<n)
    {
        cout << 2*i << endl;
        i++;
    }
}