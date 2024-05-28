#include<iostream>
using namespace std;
int main()
{
    while(1)
    {


    int num,i,fact=1;
    cout<<"Enter the positive number= ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
    }
    return 0;
}
