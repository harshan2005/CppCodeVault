#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int  principal,rate, years;
    cout << "Enter the principal,rate,years are below :"<<endl;
    cin >> principal >> rate >> years;
    
    double interest= (principal*rate*years)/100.0;
    
    double total_amount = principal+interest;
    
    double discount = 0.02*interest;
    
    double final_amount = principal+(interest - discount);
    cout << fixed <<  setprecision(2);
    cout << interest <<"\n"<< total_amount <<"\n"<< discount <<"\n"<< final_amount ;
    return 0;
    
}