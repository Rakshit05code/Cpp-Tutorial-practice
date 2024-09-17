// #include<iostream>
// using namespace std;
// int main() {
    
/*one way of using arrays
int marks[4]={32,54,37,67};
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<marks[3]<<endl;*/

//another way of using array 
// int mathmarks[5];
// mathmarks[0]=25;
// mathmarks[1]=37;
// mathmarks[2]=52;
// mathmarks[3]=27;
// mathmarks[4]=68;

// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;
// cout<<mathmarks[4]<<endl;


//u can also print this using loops

#include<iostream>
using namespace std;

int main() {
int marks[5];

 marks[0] =  27 ;
 marks[1] =  54;
 marks[2] =  67;
 marks[3] =  97;
 marks[4] =  3 ;


 for (int i = 0; i < 5; i++)
    {
        cout<<"the value of marks:"<<i<<"=\t"<<marks[i]<<endl;

        /* code */
    }
        return 0;
}