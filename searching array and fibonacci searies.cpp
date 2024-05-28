#include<iostream>
using namespace std;
int main()
{
    int i,arr[100],n,sum=0;
    cout<<"How many numbers: ";
    cin>>n;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
   return 0;
}
