#include<iostream>
using namespace std;
class Hi
{
    public:
    int a=5,b=6;


    friend class Hello;
};
class hello
{
   public:
       int return_value(Hi &ob)
       {
           int area=ob.a+ob.b;
           return area;
       }
};
int main()
{
    Hi ob1;
    hello ob2;
    cout<<"The area is: "<<ob2.return_value(ob1);
    return 0;

}
