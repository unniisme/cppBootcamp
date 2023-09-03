// Question
// Make an array of size n and populate it with n input integers

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    // Make array
    int ar[n];
    
    // Take inputs
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    // Print array
    for (int i=0; i<n; i++)
    {
        cout << ar[i] << " ";
    }
    
}