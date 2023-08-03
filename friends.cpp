#include<iostream>
using namespace std;

class hello
{
  public:
  void gun();
};

class marvellous
{
  public:
  void sun();
  void run();
};

class demo
{
  public:
  int a;
  
  private:
  int b;

  protected:
  int c;

  public:
  demo(int i, int j, int k)
  {
    a= i;
    b= j;
    c= k;
  }

  friend void fun();
  friend void hello::gun();
  friend class marvellous;
};

void hello::gun()
{
  demo obj(11,21,51);
  cout<<"a:"<<obj.a;
  cout<<"b:"<<obj.b;
  cout<<"c:"<<obj.c;
}

void marvellous :: sun()
{
  demo obj(11,21,51);
  cout<<"obj.a"<<obj.a<<"n";
  cout<<"obj.b"<<obj.b<<"\n";
  cout<<"obj.c"<<obj.c<<"\n";
}

void marvellous :: run()
{
  demo obj(1,2,3);
  cout<<"obj.a"<<obj.a<<"n";
  cout<<"obj.b"<<obj.b<<"\n";
  cout<<"obj.c"<<obj.c<<"\n";
}

void fun()
{
  demo obj(1,2,3);
  cout<<"obj.a"<<obj.a<<"n";
  cout<<"obj.b"<<obj.b<<"\n";
  cout<<"obj.c"<<obj.c<<"\n";
}

int main()
{
  fun();
  hello hobj;

  hobj.gun();

  marvellous mobj;
  mobj.sun();
  mobj.run();

  return 0;
}


