// URL : https://www.hackerrank.com/challenges/c-tutorial-functions/problem

#include <iostream>
#include <climits>

int main ()
{
        int max = INT_MIN;
        int current_number;

    while (std::cin>>current_number)
    {
        if (current_number > max) {
            max = current_number;
        }
    }

    // The other way to solve the same program would be max(max(a,b), max(c,d))
    // But, I wanted to make it generic while also reducing the space complexity.
    
    std::cout<<max<<std::endl;

    return 0;
}