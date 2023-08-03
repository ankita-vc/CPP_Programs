#include<iostream>

using namespace std;

class demo
{
  public:

  void fun()     //1000 from text section
  {
   cout<<"inside fun\n";
  }

  void gun()     //2000 from text section
  {
   cout<<"inside gun\n";
  }
};

int main()
{
   cout<<"inside main\n";

   demo obj;

   cout<<"size of object::"<<sizeof(obj)<<"\n";

   obj.fun();   //CALL 1000  CALL_______
   obj.gun();    //CALL 2000

   return 0;
}

/*
OUTPUT:
inside main
size of object::1
inside fun
inside gun
*/