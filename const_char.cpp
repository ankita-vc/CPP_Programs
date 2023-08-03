#include<iostream>
using namespace std;

class demo
{
  public:
  int a, b;
  const int c,d;

  demo(): c(11),d(21)
  {
    cout<<"demo():\n";
    a= 0;
    b= 0;
  }

  demo(int i, int j, int k, int l): c(k), d(l)
  {
    cout<<"demo(----):\n";
    a= i;
    b= j;
  }
};

int main()
{
  demo obj1(11,21,51,101);
  demo obj2(1,2,3,4);
  demo obj3;

  cout<<"a:"<<obj1.a<<"\n";
  cout<<"b:"<<obj1.b<<"\n";
  cout<<"c:"<<obj1.c<<"\n";
  cout<<"d:"<<obj1.d<<"\n";

  cout<<"a:"<<obj2.a<<"\n";
  cout<<"b:"<<obj2.b<<"\n";
  cout<<"c:"<<obj2.c<<"\n";
  cout<<"d:"<<obj2.d<<"\n";

  cout<<"a:"<<obj3.a<<"\n";
  cout<<"b:"<<obj3.b<<"\n";
  cout<<"c:"<<obj3.c<<"\n";
  cout<<"d:"<<obj3.d<<"\n";



  return 0;
}