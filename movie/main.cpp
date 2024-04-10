#include"movie.h"
#include<iostream>
using namespace std;
int main()
{
    string t,d;
    int y;

    movie myFavouriteMovie;

    cout<<"Enter movie details"<<endl;
    cout<<"Enter title:"<<endl;
    cin>>t;
     cout<<"Enter year:"<<endl;
     cin>>y;
      cout<<"Enter director name:"<<endl;
      cin>>d;
    myFavouriteMovie.set_title(t);
    myFavouriteMovie.set_year(y);
    myFavouriteMovie.set_director(d);
    myFavouriteMovie.set_display();
    return 0;

}
