//constants
// #include<iostream>
// int main ()
// const int a = 3;
// const float = 41.27;
// return 0;



//Manipulators 1.endl
//  #include<iostream>
//  int main () {
//  using namespace std;
//  int a = 3;
//  int b = 37;
//  int c = 3547;
 
//  cout<<"To print this in next line we use endl"<<endl<<"enter age :"<<endl;
 
//  cout<<"To print this in next line we use endl"<<endl<<"enter age :"<<endl;
 
//  cout<<"To print this in next line we use endl"<<endl<<"enter age :"<<endl;
 
//  return 0;
//  }



//setw  #include<iomanip>
  #include<iostream>
  #include<iomanip>
  int main () {
 using namespace std;
 int a = 3;
 int b = 37;
int c = 3547;
  
  cout<<"the value of a is withou the use of setw :"<<a<<endl;
  cout<<"the value of b is withou the use of setw :"<<b<<endl;
  cout<<"the value of c is withou the use of setw :"<<c<<endl<<endl;


  cout<<"the value of a is :"<<setw(5)<<a<<endl;
  cout<<"the value of b is :"<<setw(5)<<b<<endl;
  cout<<"the value of c is :"<<setw(5)<<c<<endl;

  return 0;
  }