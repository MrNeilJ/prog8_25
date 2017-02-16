// This program uses two range-based for loops with a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define a vector with a starting size of 5 elements
    vector<int> numbers(5);

    // Get values for the vector elemetns
    // Make the range variable a reference variable so it can be
    // used to change the contents of the element it references
    for (int &val : numbers)
    {
        cout << "Enter an integer value: ";
        cin  << val;

    }
}