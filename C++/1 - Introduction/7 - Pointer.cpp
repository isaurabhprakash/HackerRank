// URL : https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>

int mod (int num) 
{
    return num < 0 ? num * (-1) : num;
}
void update(int *a,int *b) {
    
    *a = *a + *b;
    *b = mod(*a - 2*(*b));
}

int main ()
{
        int number_one;
        int number_two;
    
    if(std::cin>>number_one) {

        if(std::cin>>number_two) {

                update (&number_one, &number_two);
        }
    }

    std::cout <<number_one<<std::endl;
    std::cout <<number_two<<std::endl;
    return 0;
}