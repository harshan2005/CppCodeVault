#include <iostream>
using namespace std;
int main(){
    int fp_amount_shirt, fp_discount_offered,fp_shipping_charges,
    sn_amount_shirt, sn_discount_offered,sn_shipping_charges,
    am_amount_shirt, am_discount_offered,am_shipping_charges;
    
    cin>>fp_amount_shirt>>fp_discount_offered>>fp_shipping_charges>>sn_amount_shirt>>sn_discount_offered>>sn_shipping_charges>>
    am_amount_shirt>>am_discount_offered>>am_shipping_charges;
    
    int Flipkart_dis=((fp_amount_shirt*fp_discount_offered)/100);
    int total_fp=(fp_amount_shirt- Flipkart_dis)+fp_shipping_charges;
    cout<<"In Flipkart: "<<total_fp<<endl;
    
    int Snapdeal_dis=((sn_amount_shirt*sn_discount_offered)/100);
    int total_sn=(sn_amount_shirt- Snapdeal_dis)+sn_shipping_charges;
    cout<<"In Snapdeal: "<<total_sn<<endl;
    
    int Amazon_dis=((am_amount_shirt*am_discount_offered)/100);
    int total_am=(am_amount_shirt- Amazon_dis)+am_shipping_charges;
    cout<<"In Amazon: "<<total_am<<endl;
    
    if(total_fp<total_sn&&total_fp<total_am){
        cout<<"He will prefer Flipkart";
    }
    else if(total_fp>total_sn&&total_sn<total_am){
        cout<<"He will prefer Snapdeal";
    }
    else{
        cout<<"He will prefer Amazon";
    }
}
