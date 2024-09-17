 #include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"using functions with 2 arguments"<<endl;
    return a+b;

}
 
int sum(int a,int b, int c){
    cout<<"using functions with 3 arguments"<<endl;
    return a+b+c;
}

    //Calculate the volume of cylinder;

    int volume(double r,float h){
        return (3.14*r*r*h);

    }

    //calc volume of cube 
    int volume(int x){
        return (x*x*x);
    }

    //volume of cuboid
    int volume(int l,int b, int h){
        return (l*b*h);
    }

int main() {
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3,6 and 8 is "<<sum(3,6,8)<<endl;
    cout<<"the volume of the cylinder of radius 3 and height 8 is "<<volume(3,8)<<endl;
    cout<<"the volume of the cube of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of the cuboid of lenght 3 breadth 5 and height 7 is "<<volume(3,5,7)<<endl;
    return 0;
}