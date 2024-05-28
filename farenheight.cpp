#include<iostream>
using namespace std;
int main()
{
    double faren,cels;
    cout<<"Enter the temperature in celcius: ";
    cin>>cels;
    faren=1.8* cels+32;
    cout<<"Temperature in fareheight: "<<faren;
    return 0;
}
