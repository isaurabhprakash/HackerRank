// URL : https://www.hackerrank.com/challenges/cpp-lower-bound/problem

#include <iostream>
#include <vector>
#include <algorithm>

int main ()
{
        int                 no_of_integers;
        int                 no_of_queries;
        std::vector<int>    v;
        int                 val;

    std::cin>>no_of_integers;
    
    while (no_of_integers--)
    {
        std::cin>>val;
        v.push_back (val);
    }

    std::cin>>no_of_queries;
    
    while (no_of_queries--)
    {
        std::cin>>val;
        // This will return iterator pointing to the element whose value is jsut greater than val.
        std::vector<int>::iterator low = lower_bound (v.begin(), v.end (), val);

        // Not subtracting on in the index as the array index starts from 1.
        if (v[low - v.begin()] == val) {

            // Adding 1 for the same reason.
            std::cout<<"Yes " << (low - v.begin() + 1) << std::endl;
 
        } else {

            // Adding 1 for the same reason.
            std::cout<<"No " << (low - v.begin() + 1) << std::endl; 
        }
        
    }

    return 0;
}