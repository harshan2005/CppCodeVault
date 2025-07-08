#include <iostream>
using namespace std;
int main(){
    int copies_sold,cost_copy,spends_copy;
    cin >> copies_sold >> cost_copy >> spends_copy;
    
    int reveun= copies_sold*cost_copy;
    int cost= copies_sold*spends_copy;
    int fix_amt= 100;
    
    int  profit = reveun-cost-fix_amt;
    
    cout <<  profit << endl;
    //cout << re <<"\n"<< co <<"\n"<< fx;
}
