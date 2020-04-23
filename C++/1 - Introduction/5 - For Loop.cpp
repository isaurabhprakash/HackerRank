// URL : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem

#include <iostream>
#include <string>

int main ()
{
        int starting_number, ending_number;
        std::string number[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (std::cin>>starting_number) {

        if (std::cin>>ending_number) {

            for (int index = starting_number; index <= ending_number; ++index)
            {
                if (index <= 0) {

                    std::cout<<number[index-1]<<std::endl;

                } else {

                    if ( index & 1) {

                        std::cout<<"odd"<<std::endl;

                    } else {

                        std::cout<<"even"<<std::endl;

                    }
                }
            }
        }


    }
}