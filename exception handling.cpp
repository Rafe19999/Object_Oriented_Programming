#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    try
    {
    double a,b;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    if(b==0)
    {
        throw 1;
    }
    cout<<setprecision(3);
    double result=a/b;
    cout<<"The result is: "<<result;
    }
    catch (int )
    {
        cout<<"You cannot divide with zero"<<endl;
        cout<<"please change the value of the b"<<endl;
    }
    return 0;
}
