#include<string>
using namespace std;
class GroceryItem
{
private:
    int snum,qstock;
    double price,tvalue;

public:
    void set_snum(int);
    void set_price(double);
    void set_qstock(int);
    void compute_tvalue();
    void set_display();

};
