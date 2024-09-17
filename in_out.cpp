#include<iostream>
int main() {
    /*Either use std::cout 
         OR using namespace std*/
     int num1, num2;
    std::cout<<"Enter the value of Num1:\n";
    std::cin >>num1;

    std::cout<<"Enter the value of Num2:\n";
    std::cin >>num2;

    std::cout<<"Sum of the two no. is :\n"<<num1+num2;
    

        return 0;
}