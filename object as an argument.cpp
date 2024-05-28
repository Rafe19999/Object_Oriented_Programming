#include<iostream>
using namespace std;
class Box
{
private:
    int x;
public:
    void input_data(int a)
    {
        x=a;
        cout<<"The number is: "<<x<<endl;
    }
    int sum(Box ob1,Box ob2)
    {
        return x=ob1.x+ob2.x;
    }
};
int main()
{
    Box ob,ob1,ob2;
    ob1.input_data(5);
    ob2.input_data(10);

    cout<<"The summation is: "<<ob.sum(ob1,ob2);
    return 0;
}
