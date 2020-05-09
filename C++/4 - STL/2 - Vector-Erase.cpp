// URL : https://www.hackerrank.com/challenges/vector-erase/problem
#include <iostream>
#include <vector>

int main ()
{
        int                 temp; 
        int                 temp1;;
        std::vector<int>    v;
    
    std::cin>>temp;

    while (temp--) {         

        std::cin>>temp1;
        v.push_back(temp1);
    }

    std::cin>>temp;

    // Since the vecotr index starts form 1 here.
    temp = temp - 1;
    v.erase(v.begin() + temp);

    std::cin>>temp>>temp1;

    // Since the vecotr index starts from 1 here.
    temp = temp -1;
    temp1 = temp1 - 1;

    v.erase(v.begin() + temp, v.begin() + temp1);

    std::cout<<v.size ()<<std::endl;

    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {

        std::cout<<*it<<" ";
    }
    return 0;
}