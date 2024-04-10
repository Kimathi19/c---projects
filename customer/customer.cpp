#include"customer.h"
#include<string>
#include<iostream>
using namespace std;
void movie ::set_title(string t){
title=t;
}
void movie ::set_year(int y){
year=y;
}
void movie::set_director(string d){
director=d;
}
void movie::display(){
cout<<"The movie title is : "<<title<<endl;
cout<<"the movie director :" <<director<<endl;
cout<<"release year :"<<year;
}
