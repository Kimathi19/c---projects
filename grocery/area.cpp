//write a program which calculates area of a triangle,rectangle and a circle based on the response that the user gives to the program
#include<iostream>
using namespace std;
int main()
{
    double base, height, length, width, radius, area;
    char response;

    cout<<"Press t to calculate area of triangle\n";
    cout<<"Press r to calculate area of rectangle\n";
    cout<<"Press c to calculate area of circle\n";
    cin>>response;
    if (response=='t')
        cout<<"Enter base and height of triangle:"<<endl;
        cin>>base>>height;
        area=0.5*base*height;
    else if (response=='r')
        cout<<"Enter length and width of the rectangle:"<<endl;
        cin>>length>>width;
        area = length * width;
    else if (response=='c')
        cout<<"Enter radius of the circle:"<<endl;
        cin>>radius;
        area = 3.14*radius*radius;
    else
            cout<<"Invalid input\n"
            cout<<"Area:"<<area<<endl;

    return 0;
}
