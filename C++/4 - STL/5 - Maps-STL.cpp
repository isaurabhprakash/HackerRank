// URL : https://www.hackerrank.com/challenges/cpp-maps/problem

#include <iostream>
#include <string>
#include <map>

#define ADD     1
#define DELETE  2
#define PRINT   3

int main ()
{
        int                         no_of_queries;
        int                         action;
        std::string                 key;
        int                         value;
        std::map<std::string,int>   m;
         
    std::cin>>no_of_queries;

    while (no_of_queries--)
    {
        std::cin>>action;
        std::cin>>key;

        switch (action) 
        {
            case ADD : 
                std::cin>>value;
                m[key] += value;
                break;

            case DELETE :

                m.erase (key);
                break;

            case PRINT :

                std:: cout<<m[key]<<std::endl;
                break;
        }

    }

    return 0;   
}