#include<iostream>
using namespace std;
class box
{
private:
    int a;
public:
    void get_value(int x)
    {
        a=x;
    }
     void display()
     {
         cout<<a;
     }

    box operator- (box b)
     {
        box temp;
        temp.a=a+b.a;
        return temp;
     }

};
int main()
{
    box ob1,ob2,ob3;
    ob1.get_value(4);
    ob2.get_value(5);
    ob3=ob1-ob2;
    ob3.display();
    return 0;
}
