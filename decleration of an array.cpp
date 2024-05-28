#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i;
    cout<<"How many numbers you want: ";
    cin>>n;
    cout<<"Enter the numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
