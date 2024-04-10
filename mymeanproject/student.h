//Write a program that takes marks in 3 subjects, computes the sum, the mean & grades the mean
//class declaration
#include<string>
#include<iostream>
using namespace std;
class student
{
   private:
       string name,reg_num;
       double sub1,sub2,sub3;
       double total_marks,mean;
       char grade;

       public:
           void set_name(string);
           void set_reg_num(string);
           void set_marks(double,double,double);
           void compute_total(double);
           void compute_mean(double);
           void get_grade(char);
           void display();
};
