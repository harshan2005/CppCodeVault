#include <iostream>
using namespace std;
int main(){
    int salary,Bank,Hostel,Food,Send_par;
    cin>>salary>>Bank>>Hostel>>Food>>Send_par;
    
    int total_amount=Bank+Hostel+Food+Send_par;
    int saving=salary-total_amount;
    
    if(saving>0){
        cout<<"He can save the money";
    }
    else if(saving==0){
        cout<<"He can manage the expenses";
    }
    else{
        cout<<"He wants to work hard";
    }
}