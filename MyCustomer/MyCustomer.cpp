#include<string>
#include"MyCustomer.h"
#include<iostream>
using namespace std;
void MyCustomer::set_first_name(string f)
{
    first_name=f;
}
void MyCustomer::set_last_name(string l)
{
    last_name=l;
}
void MyCustomer::set_id_num(int i)
{
    id_num=i;
}
void MyCustomer::set_credit_lim(double c)
{
    credit_lim=c;
    credit_lim<=10000;
}
void MyCustomer::set_display()
{
    cout<<"Enter customer details:";
    cout<<"Customer first name is:"<<first_name<<endl;
    cout<<"Customer last name is:"<<last_name<<endl;
    cout<<"Customer id number is:"<<id_num<<endl;
    cout<<"Customer credit limit is:"<<credit_lim<<endl;

}
