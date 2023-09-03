// Question
// Make a '*' triangle of height n
/*

5
*
**
***
****
*****

*/
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // for each line
    for (int i=0; i<n; i++)
    {
        // for each asterisk
        for (int j=0; j<i; j++)
        {
            // print asterisk
            cout << "*";
        }
        cout << endl;
    }
}