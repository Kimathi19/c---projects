//class implementation
#include"student.h"
#include<iostream>
using namespace std;

void student::set_name(string n)
{
    name = n;
}
void student::set_reg_num(string r)
{
    reg_num = r;
}
void student::set_marks(double s1,double s2,double s3)
{
    sub1 = s1;
    sub2 = s2;
    sub3 = s3;
}
void student::compute_total(double)
{
    total_marks= sub1 + sub2 + sub3;
}
void student::compute_mean(double)
{
    mean= total_marks/3;
}
void student::get_grade(char)
{
    if(mean<=40)
        grade = 'C';
    else if(mean<=65)
         grade = 'B';
    else
         grade = 'A';
}
void student::display()
{
    cout<<
}
