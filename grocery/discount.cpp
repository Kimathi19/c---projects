#include<iostream>
using namespace std;
int main()
{
    double bills,amount;
    cout<<"Enter cust bill\n";
    cin>>bills;
    if (bills<=5000)
        amount = bills * 0.9;
    else
        amount = bills * 0.85;
    cout<<"The bill amount is:"<<amount<<endl;
    return 0;
}
