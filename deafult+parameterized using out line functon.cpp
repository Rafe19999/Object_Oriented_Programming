#include<iostream>
using namespace std;
class wall
{
private:
    double a,b;
public:
    wall(double x,double y)
    {
        a=x;
        b=y;

        double area=x*y;
        cout<<"The area is= "<<area<<endl;

    }
};
int main()
{
   wall wall(5.5,6.6);
    return 0;
}
