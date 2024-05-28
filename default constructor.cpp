#include<iostream>
using namespace std;
class box
{
private:
    int a,b;
public:
    box(int x,int y)
    {
        int area;
        a=x;
        b=y;
        area=x*y;
        cout<<"The area of the box= "<<area<<endl;
    }
};
int main()
{
    box box(5,6);
    return 0;
}

