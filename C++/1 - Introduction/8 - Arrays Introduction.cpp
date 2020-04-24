// URL : https://www.hackerrank.com/challenges/arrays-introduction/problem

#include <iostream>

int main ()
{
        int     size = 0;
        int *   arr  = nullptr;

    std::cin>>size;

    arr = new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin>>arr[i];
    }

    for (int i = size - 1; i >=0 ; --i)
    {
        std::cout<<arr[i]<<" ";
    }    

    return 0;
}