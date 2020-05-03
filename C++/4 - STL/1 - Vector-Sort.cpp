// URL : https://www.hackerrank.com/challenges/vector-sort/problem

#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
        std::vector<int>    vector_number;
        int                 number;
        int                 no_of_elements;

    std::cin>>no_of_elements;

    while (no_of_elements--) {
        if (std::cin>>number) {
            
            vector_number.push_back (number);
        }
    }


    // Sort the elements of the vector.
    sort (vector_number.begin(), vector_number.end());

    // Create an iterator for the vector and use it
    // Also doint pre-increment instead of post-increment would require less processing and memory
    // as a temporary variable would not be needed in this case.
    // Need to verify this from the assembly code.
    for (std::vector<int>::iterator it = vector_number.begin(); it!= vector_number.end(); ++it) {
        std::cout<<*it<<" ";
    }
    return 0;
}