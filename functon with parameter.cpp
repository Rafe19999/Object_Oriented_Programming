#include<iostream>
using namespace std;
class Box{
 int a,b,c;
 public:
     void set_1(int x);
     int get_1();
     void print_volume();
 };
 void Box::set_1(int x)
 {
    a=x;
 }
 int Box::get_1()
 {
     return a;
 }
 int main()
 {
     Box ob;
     ob.set_1(10);
     cout<<ob.get_1();
     return 0;
 }
