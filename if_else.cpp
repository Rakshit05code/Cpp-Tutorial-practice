//Selection control system : if-else ladder
// #include<iostream>
// using namespace std;
// int main() {
    
//     int age;
//     cout<<"tell me your age"<<endl;
//     cin>>age;
//     if (age<18)
//     {cout<<"you cannot come to my party"<<endl;}

//     else if (age==18)
//     {cout<<"you are a kid and come to party with kid pass"<<endl;}

//     else if (age>18)
//     {cout<<"you are welcome in the party\n"<<"you can enjoy\n"<<"bring your passes with you\n";}

// return 0;

//     }


#include<iostream>
using namespace std;
int main(){   

int age;

cout<<"what is your age:"<<endl;
cin>>age;
 {
    switch (age)
    {
    case 18 :
    cout<<"you are 18"<<endl;
        break;
    case 22:
    cout<<"you are 22"<<endl;
    break;

    case 2:
    cout<<"you are a kid"<<endl;
       break;

        default:
        cout<< "No special cases"<<endl;
        break;
    }
}
}