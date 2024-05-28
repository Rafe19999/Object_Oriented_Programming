#include<iostream>
#include<iomanip>
using namespace std;
class Hello
{
private:
    double a,b,c;
public:
    void input_data(double x,double y,double z)
    {
        a=x;
        b=y;
        c=z;

    }
    friend double func(Hello);
};
double func(Hello ob)
{
    double area=ob.a*ob.b*ob.c;
    return area;
}
int main()
{
    Hello ob1;
    cout<<fixed;
    cout<<setprecision(2);
    ob1.input_data(2.3,4.5,6.7);
    cout<<"The area is: "<<func(ob1);
    return 0;
}
