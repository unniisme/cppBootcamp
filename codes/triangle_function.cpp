// Question
// Print the first n natural numbers
#include <iostream>

using namespace std;

void print_stars(int n)
{
    for (int i=0; i<n; i++)
    {
        cout << "*";
    }
}

int main()
{
    int n;
    cin >> n;

    // For each line
    for (int i=0;  i<n; i++)
    {
        // Print asterisks using function
        print_stars(i+1);
        cout << endl;
    }
    
}