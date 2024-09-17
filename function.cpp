 #include<iostream>
using namespace std;
int sum (int a, int b) {
    int c = a+b;
    return c;
    
}
void g();
int main() {
    int num1, num2;
    
    cout<<"Enter the value of num1"<<endl;
     cin>>num1;
     cout<<"Enter the value of num2"<<endl;
     cin>>num2;
    cout<<"The sum is\t :"<<sum(num1,num2)<<endl;
    g();
return 0;
}
// the function prototype - the function u try to right after the main and wants to run it correctly
//the syntax of this function is .....function type-name (arguments);
// for ex,

void g(){
    cout<<"Good Morning";
     
}