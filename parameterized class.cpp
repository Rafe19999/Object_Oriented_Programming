#include<iostream>
using namespace std;
class box
{
public:
    int id;
    double cgpa;
    void display()
    {
        cout<<id<<endl<<cgpa;

    }
    void getvalue(int x, double y)
    {
       id=x;
       cgpa=y;
    }
};
int main()
{
    box obj;

    obj.getvalue(10156,4.67);
     obj.display();
    return 0;
}
