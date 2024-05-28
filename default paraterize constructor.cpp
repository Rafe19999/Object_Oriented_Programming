#include<iostream>
using namespace std;
class box{
private:
    double length;
    double height;
public:
    box()
    {
        cout<<"Enter the value of length= ";
        cin>>length;
        cout<<"Enter the values of height= ";
        cin>>height;
        double area=length*height;
        cout<<"The area of the box= "<<area<<endl;
    }
};
int main()
{
    box box1;
    return 0;
}
