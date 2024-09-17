#include<iostream>
using namespace std;
 
float moneyreceived(int currentmoney,float factor =1.04){
return currentmoney*factor;
}

int main(){
    int money=10000;
    cout<<"If you have amount of RS"<<money<<"in your bank acount u will receive "<<moneyreceived(money)<<endl;
    cout<<"For VIP ,If you have amount of RS"<<money<<"in your bank acount u will receive "<<moneyreceived(money,1.1)<<endl;


return 0;
}