#include<iostream>
using namespace std;
inline int product(int a, int b){
    //not recommeded to use static function with inline function
    //static int c=0;
    // c= c+1;
    //return a*b+c;
    return a*b;
    
}
int main() {
    int a,b;
cout<<"type A nd B"<<endl;
cin>>a>>b;
cout<<"the product of a and b is "<<product(a,b)<<endl;
cout<<"the product of a and b is "<<product(a,b)<<endl;
cout<<"the product of a and b is "<<product(a,b)<<endl;
cout<<"the product of a and b is "<<product(a,b)<<endl;
cout<<"the product of a and b is "<<product(a,b)<<endl;
cout<<"the product of a and b is "<<product(a,b)<<endl;
    return 0;
}