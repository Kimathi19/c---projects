//class declaration
#include<string>
using namespace std;
class movie{
private:
    string title,director;
    int year;
public:
    void set_title(string);
    void set_year(int);
    void set_director(string);
    void set_display();
};
