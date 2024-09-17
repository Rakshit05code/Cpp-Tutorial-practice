#include<iostream>
using namespace std;
int factorial(int n){
    {if (n<=1)
    return 1;
    }
    return n * factorial(n-1);

    //facorial of no. is 6!
    // the factorial is 6*5*4*3*2*1=720;
    // it can also be written in the form of 6*5!
    
}
int main() {
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<"The factorial of the "<<a<<" is "<<factorial(a)<<endl;


return 0;
}
//Factorial(n)=n*factorial(n-1);

//Factorial(4)=4*Factorial(3);
//Factorial(4)=4*3*Factorial(2);
//Factorial(4)=4*3*2*1;    Here we will get the funtion of if(n<=1);
