#include<string>
using namespace std;
class GroceryItem
{
private:
    int snum, qstock;
    double price,tvalue;
    void set_snum(int);
    void set_price(double);
    void set_qstock(int);
    void compute_tvalue();
public:

    void  dataEntry();
    void set_display();

};
