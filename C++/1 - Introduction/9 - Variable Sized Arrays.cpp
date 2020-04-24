// URL : https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <iostream>

int main ()
{
        int     major_array_length = 0;
        int     minor_array_length = 0;
        int     no_of_queries      = 0;
        int **  arr                = nullptr;

    std::cin>>major_array_length; 
    std::cin>>no_of_queries;

    // Length of the major array, each element of which will point to another array
    arr = new int*[major_array_length];

    // Take the input
    for (int i = 0; i < major_array_length; ++i)
    {
        std::cin>>minor_array_length;    

        arr[i] = new int [minor_array_length];

        for (int j = 0; j < minor_array_length; ++j)
        {
            std::cin>>arr[i][j];
        }
        
    }

    // Take the queries and print the output
    for (int i = 0; i < no_of_queries; ++i)
    {
            int major_array_index; 
            int minor_array_index;
        
        std::cin>>major_array_index;
        std::cin>>minor_array_index;

        std::cout<<arr[major_array_index][minor_array_index]<<std::endl;
    }

    return 0;
}