 #include<iostream>
using namespace std;
int main() {

//pointer-data type which stores address of data type
int a = 3;
int* b=&a;
cout<<"address of a is "<<b<<endl;

cout<<"address of b is "<<*b<<endl;


//pointer to pointer 
int** c= &b;
cout<<"the address of b is "<<&b<<endl;
cout<<" the address of b is "<<c<<endl;
cout<<" the value of at address c is "<<*c<<endl;
cout<<"the vale of "<<**c<<endl;
return 0;
}
//0x61ff08 this is address of data type
//& - address of operators
//* - deference operators(value of operator)



