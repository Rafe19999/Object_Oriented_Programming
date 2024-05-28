#include<iostream>
using namespace std;
class Rectangle
{
    //protected:
    public:
       float length, breadth;
    public:
        Rectangle()
        {
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter breadth: ";
            cin>>breadth;
        }
};
class Area : public Rectangle
{
    public:
       float calc()
         {
             return length*breadth;
         }
};
class Perimeter : public Rectangle
{
    public:
       float calc()
         {
            return 2*(length+breadth);
         }
};
int main()
{
 cout<<"Enter first rectangle to find area.\n";

  Area a;
   cout<<"Area = "<<a.calc()<<" square meter"<<endl;


Perimeter p;
   cout<<"\nPerimeter = "<<p.calc()<<" meter";

 return 0;
}

