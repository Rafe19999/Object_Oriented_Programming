#include<iostream>
using namespace std;
class Box{
int a,b,c;
public:
    void get_value();
    void print_value();
};
void Box::get_value()
{
    cout<<"Enter the values= ";
    cin>>a>>b>>c;
}
void Box::print_value()
{
    int volume;
    volume=a*b*c;
    cout<<"The volume of the box= "<<volume;
}
int  main()
{
    Box ob;
    ob.get_value();
    ob.print_value();
    return 0;
}
