#include<iostream>
using namespace std;

class base
{
  public:
  int a;

  private:
  int b;

  protected:
  int c;
 
 public:
  base()
  {
    cout<<"inside defalut constructor of base\n";
    a= 11;
    b= 21;
    c= 51;
  }

  ~base()
  {
    cout<<"destruction\n";
  }

  void gun()
  {
    cout<<"inside gun of base\n";
    cout<<"a:"<<a<<"\n";
    cout<<"b:"<<b<<"\n";
    cout<<"c:"<<c<<"\n";
  }
};

class derived : public base
{
  public:
  int x;

  private:
  int y;

  protected:
  int z;

  public:
  derived()
  {
    cout<<"inside default constructor of derived\n";
    x= 101;
    y= 111;
    z= 121;
  }

  ~derived()
  {
    cout<<"destructor\n";
  }

  void fun()
  {
    cout<<"inside fun of derived\n";
    cout<<"x:"<<x<<"\n";      //public of derived
    cout<<"y:"<<y<<"\n";      //private of derived
    cout<<"z:"<<z<<"\n";      //protected of derived
    cout<<"a:"<<a<<"\n";      //public of base
    cout<<"b:"<<b<<"\n";      //private of base
    cout<<"c:"<<c<<"\n";      //protected of base
  }  
};

int main()
{
  cout<<"inside main\n";

  cout<<"size of base:"<<sizeof(base)<<"\n";
  cout<<"size of derived:"<<sizeof(derived)<<"\n";

  derived obj;

  obj.gun();      //function of base
  obj.fun();      //function of derived

  cout<<"a:"<<obj.a<<"\n";  //public of base
  cout<<"b:"<<obj.b<<"\n";  //private of base
  cout<<"c:"<<obj.c<<"\n";  //protected of base
  cout<<"x:"<<obj.x<<"\n";  //public of derived
  cout<<"y:"<<obj.y<<"\n";  //private of derived
  cout<<"z:"<<obj.z<<"\n";  //protected of derived


}