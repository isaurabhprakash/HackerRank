// URL : https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>

int main ()
{
        std::string first_string;
        std::string second_string;

    std::cin>>first_string;
    std::cin>>second_string;

    // Print the sizes of the two strings
    std::cout<<first_string.size () <<" "<<second_string.size ()<<std::endl;

    // Concatenate the two strings
    std::cout<<first_string + second_string<<std::endl;

    // Output the two strings after swapping first letters
    // Can be done using swapping the first letters but that will 
    // lead to the loss of the two strings.
        std::string temp = first_string;

    temp[0] = second_string[0];
    std::cout<<temp<<" ";

    temp = second_string;
    temp[0] = first_string[0];
    std::cout<<temp<<std::endl;
    
    return 0;
}