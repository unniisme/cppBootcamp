// Question
// Take t cases, in each you will be given input n. For each case, print the first n natural numbers

/*

input
3
4
1
2

output
0
1
2
3
0
0
1

*/


#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cout << i << endl;
        }
    }

}