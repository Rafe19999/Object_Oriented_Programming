#include<iostream>
using namespace std;
class box{
private:
    double l,w,h;
    public:
    box(double x,double y,double z)
    {
      l=x;
      w=y;
      h=z;
    }
    void display()
    {
        double area;
        area=l*w*h;
        cout<<"THe area is: "<<area;
    }
};
int main()
{

    box ob(3.4,5.6,7.4);
    ob.display();
    return 0;
}
       /* cout<<"Enter the value of l= ";
        cin>>l;
        cout<<"Enter the value of w= ";
        cin>>w;
        cout<<"Enter the value of h= ";
        cin>>h;*/
