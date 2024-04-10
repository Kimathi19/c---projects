#include <iostream>
#include<string>
#include"grocery.h"
using namespace std;
int main()
{
     int s,q;
    double p,t;

  GroceryItem dataentry;
  cout<<"Enter stock number:"<<endl;
  cin>>s;
  cout<<"Enter price of item:"<<endl;
  cin>>p;
  cout<<"Enter quantity of stock:"<<endl;
  cin>>q;

  dataentry.set_snum(s);
  dataentry.set_price(p);
  dataentry.set_qstock(q);
  dataentry.compute_tvalue();
  dataentry.set_display();

  return 0;

}

