
#include<iostream>
using namespace std;
void display(int *num)
{
    *num=20;
}
int main()
{
    int x=30;
    cout<<x<<endl;
    display(&x);

    cout<<&x;

    return 0;
}
