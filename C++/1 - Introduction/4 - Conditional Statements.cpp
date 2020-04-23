// URL : https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <iostream>
#include <string>

int main ()
{
        int n;
        std::string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        
    if (std::cin>>n) {

        if (n > 9) {

            std::cout<<"Greater than 9"<<std::endl;

        } else {
            std::cout<<number[n-1]<<std::endl;
        }
    }
    return 0;
}
