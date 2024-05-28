#include<iostream>
using namespace std;
int main()
{
    int temp,n,sum=0,rem;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(n==sum)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;
}
