#include<string>
#include"num3.h"
#include<iostream>
using namespace std;
void GroceryItem::set_snum(int s)
  if (1000=>s<9000)
    {
        snum=s;
    else
    cout<<"Enter a valid stock number:"<<endl;

    ]
  void GroceryItem::set_price(double p)
  {
      if (p>0)
    price=p
    else
    cout<<"Enter a non-negative price value:"<<endl;
  }
  void GroceryItem::set_qstock(double q)
   {
       if (q>0)
    qstock = q
    else
    cout<<"Enter a positive quantity in stock:"<<endl;
   }
   void GroceryItem::compute_tvalue()
     {
         tvalue = price * qstock;
     }
      void GroceryItem::set_display()
      {
          cout<<"Enter stock number:"<<snum<<endl;
          cout<<"Enter price of the item:"<<price<<endl;
          cout<<"Enter the stock quantity of the item:"<<qstock<<endl;
          cout<<"The total value is:"<<tvalue<<endl;
      }
