#include <iostream>
#include <string>
#include"customer.h"

using namespace std;

int main()
{
 string t,d;
 int y;

 movie myfavouritemovie;
 cout<<"Enter movie details";
 cin>>t>>y>>d;
  myfavouritemovie.set_title(t);
  myfavouritemovie.set_year(y);
  myfavouritemovie.set_director(d);
  myfavouritemovie.display();

  return 0;

}
