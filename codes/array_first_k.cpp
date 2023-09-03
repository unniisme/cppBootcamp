// Question
// Take n inputs, the print the first k of those

#include <iostream>

using namespace std;

int main() {

    int n;

    cin >> n;

    int ar[n];
    
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    int k;
    cin >> k;
    for (int i=0; i<k; i++)
    {
        cout << ar[i] << " ";
    }
    
}