#include<string>
using namespace std;
class MyCustomer
{
    private:
        string last_name,first_name;
        int id_num;
        double credit_lim;
    public:
        void set_first_name(string);
        void set_last_name(string);
        void set_id_num(int);
        void set_credit_lim(double);
        void set_display();
};
