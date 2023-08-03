#include<iostream>

using namespace std;

class base
{
  public:
  int A,B;
  
  virtual void fun()
  {
    cout<<"inside fun of base\n";
  }

  virtual void gun()
  {
    cout<<"inside gun of base\n";
  }

  virtual void sun()
  {
    cout<<"inside sun of base\n";
  }

};

class derived : public base
{
  public:
  int X,Y;

  void fun()
  {
    cout<<"inside fun of derived\n";
  }

  virtual void sun()
  {
    cout<<"inside sun of derived\n";
  }

  virtual void run()
  {
    cout<<"inside run of derived\n";
  }

};

int main()
{
  cout<<"inside main\n";

  derived dobj;

  cout<<"size of base:"<<sizeof(base)<<"\n";
  cout<<"size of derived:"<<sizeof(derived)<<"\n";

  base *bp= new base;        //(ALLOWED)
  derived *dp= new derived;  //(ALLOWED)

  base *bp1= new derived;  //Upcasting (ALLOWED)
  //derived *dp1= new base;  //Downcasting (NOT ALLOWED)

  bp->fun();
  bp->gun();
  bp->sun();
 // bp->run();  (NOT ALLOWED)

 return 0;

}

/*
OUTPUT:
inside main
size of base:16
size of derived:24
inside fun of base
inside gun of base
inside sun of base
*/