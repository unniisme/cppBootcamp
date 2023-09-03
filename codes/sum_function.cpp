// Question
// Print the first n natural numbers
#include <iostream>

using namespace std;

int sum_n(int n)
{
    return n*(n+1)/2;
}

int main()
{
    int input;
    cin >> input;

    cout << sum_n(input);
}