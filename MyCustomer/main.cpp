#include <iostream>
#include"MyCustomer.h"
#include<string>
using namespace std;
int main()
{
    string f,l;
    int i;
    double c;

    MyCustomer xy;
    cout<<"Enter customer first name:"<<endl;
    cin>>f;
    cout<<"Enter customer last name:"<<endl;
    cin>>l;
    cout<<"Enter customer id number:"<<endl;
    cin>>i;
    cout<<"Enter customer credit limit:"<<endl;
    cin>>c;
    xy.set_first_name(f);
    xy.set_last_name(l);
    xy.set_id_num(i);
    xy.set_credit_lim(c);


    return 0;

}

