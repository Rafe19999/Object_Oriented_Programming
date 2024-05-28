#include<iostream>
using namespace std;
class A
{
private:

    int a;
public:
    int b;
    void get_ab()
    {
        a=5;
        b=6;
    }
    int get_a()
    {
        return a;

    }
    void show_a()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};
class B:public A
{
private:

    int c;
public:

    void mul()
    {
       c =b*get_a();
    }
    void display()
    {
        cout<<"The multiplication is: "<<c;
    }

};
int main()
{
    B ob;
    ob.get_ab();
    ob.get_a();
    ob.show_a();
    ob.mul();
    ob.display();
    return 0;
}
