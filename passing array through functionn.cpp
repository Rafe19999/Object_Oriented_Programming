#include<iostream>
using namespace std;
void display(int arr[],int size)
{
    int i;
    for(i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }

}




int main()
{
  int  arr[5]={23,40,50,35,20};
  display( arr,5);
   return 0;
}
