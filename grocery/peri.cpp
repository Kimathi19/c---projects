#include<iostream>
using namespace std;
int main()
{
    double length, width, perimeter, area;
    cout<<"Enter length and width of a rectangle:"<< endl;
    cin>>length>>width;
    perimeter = 2*(length + width);
    area = length * width;
    cout<<"The perimeter of the rectangle is:"<<perimeter<<endl;
    cout<<"The area of the rectangle is:"<<area<<endl;
    return 0;
}
