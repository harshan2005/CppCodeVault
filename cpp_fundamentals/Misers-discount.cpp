#include <iostream>
using namespace std;
int main(){
    float item1,item2,discount;
    cin>> item1>>item2>>discount;
    
    float total_amt=item1+item2;
    float discount_price =(total_amt-(discount/100.0)*total_amt);
    float amt_saved =total_amt- discount_price;
    
    cout << total_amt <<"\n"<< discount_price<<"\n"<< amt_saved;
    
}