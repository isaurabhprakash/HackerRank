// URL : https://www.hackerrank.com/challenges/cpp-sets/problem

#include <iostream>
#include <set>

#define ADD     1
#define DELETE  2
#define FIND    3

int main ()
{
        int             no_of_queries;
        int             action;
        int             element;
        std::set<int>   s;

    std::cin>>no_of_queries;

    while (no_of_queries--)
    {
        std::cin>>action;
        std::cin>>element;

        switch (action) 
        {
            case ADD : 

                s.insert(element);
                break;

            case DELETE :

                s.erase (element);
                break;

            case FIND :

                if (s.find(element) != s.end())
                {
                    std:: cout<<"Yes"<<std::endl;
                } else {

                    std:: cout<<"No"<<std::endl;
                }
        }

    }

    return 0;   
}