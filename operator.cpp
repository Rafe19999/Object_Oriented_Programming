#include <iostream>
using namespace std;
class Base
{
 public:
  virtual void show()
 {
  cout << "Base class"<<endl;
 }
};
class Derived  : public Base
{
 public:
 void show()
 {
  cout << " Derived Class"<<endl;
 }
};
int main()
{
 Base *p;       //Base class object
 Derived d;     //Derived class object

 p=&d;
 p->show();
 return 0;
}
