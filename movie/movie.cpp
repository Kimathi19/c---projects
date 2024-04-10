//class implementation
#include<string>
#include"movie.h"
#include<iostream>
using namespace std;
void movie::set_title(string t)
{
    title= t;
}
void movie::set_year(int y)
{
    year=y;
}
void movie::set_director(string d)
{
    director=d;
}
void movie::set_display()
{
    cout<<"Enter movie details:";
    cout<<"Title of the movie is:"<<title<<endl;
    cout<<"Release year is:"<<year<<endl;
    cout<<"Name of the director is:"<<director<<endl;
}
