#include<string>
#include"grocery.h"
#include<iostream>
using namespace std;
void GroceryItem::set_snum(int s)
{
    if (s>=1000 && s<10000)
    snum=s;
     else
        {
        cout<<"Enter another stock number:"<<endl;
     }
}
void GroceryItem::set_price(double p)
{
    if(p>0)
        price=p;
    else{
        cout<<"You entered a negative number:"<<endl;
    }
}
void GroceryItem::set_qstock(int q)
{
    if(q>0)
        qstock=q;
    else{
        cout<<"Enter another quantity in stock:"<<endl;
    }
}
void GroceryItem::compute_tvalue()
{
    tvalue=price*qstock;
}
void GroceryItem::set_display()
{
    cout<<"Enter stock number:"<<snum<<endl;
    cout<<"Enter item price:"<<price<<endl;
    cout<<"Enter quantity in stock:"<<qstock<<endl;
    cout<<"Total value is:"<<tvalue<<endl;
}
