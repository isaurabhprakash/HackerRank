// URL : https://www.hackerrank.com/challenges/c-tutorial-pointer/problem

#include <iostream>

int mod (int pNum) 
{
    return pNum < 0 ? pNum * (-1) : pNum;
}
void update(int *pNum1,int *pNum2) {
    
    *pNum1 = *pNum1 + *pNum2;
    *pNum2 = mod(*pNum1 - 2*(*pNum2));
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