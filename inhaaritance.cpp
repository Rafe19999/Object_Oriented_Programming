#include<iostream>
using namespace std;
class Box
{
protected:
    int a,b;
public:
    void input_data(int x,int y)
    {
        a=x;
        b=y;
    }

};
class sharp: public Box
{
    public:
        int area;
    void get_area()
    {
         area=a*b;
    }
    void print_value()
    {
        cout<<"The area is  : "<<area;
    }

};
int main()
{
    Box ob1;
    sharp ob2;
    ob2.input_data(5,9);
    ob2.get_area();
    ob2.print_value();
    return 0;
}
