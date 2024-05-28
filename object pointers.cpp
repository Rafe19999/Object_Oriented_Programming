#include<iostream>
using namespace std;
class box
{
    int num;
public:
    void setnum(int a)
    {
        a=num;
    }
    void getnum();
};
void box::getnum()
{
    cout<<"num"<<num<<endl;
}
int main()
{
    box ob, *p;
    ob.setnum(1);
    ob.getnum();
    p=&ob;
    p->getnum();
    return 0;
}
