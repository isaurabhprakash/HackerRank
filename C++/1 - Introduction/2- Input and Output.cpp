// URL : https://www.hackerrank.com/challenges/cpp-input-and-output/problem

#include<iostream>

int main ()
{
    // We have to take 3 numbers (int) as input and output their sum to the console.
    // Instead of using 3 varaibles, we will use only one.
        int num;
        int sum = 0;

    while (std::cin>>num)
    {
        sum += num;
    }

    std::cout<<sum<<std::endl;
    return 0;
}