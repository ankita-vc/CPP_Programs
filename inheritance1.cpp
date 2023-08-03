
//Multilevel inheritance..

#include<iostream>

using namespace std;

class parent
{
   public:
    int A,B;

    parent()
    {
      cout<<"inside default constructor of parent\n";
      A= 11;
      B= 21;
    }

    void fun()
    {
      cout<<"inside fun of parent\n";
    }

    ~parent()
    {
      cout<<"inside destructor of parent\n";
    }
};

class child : public parent
{
   public:
    int C,D;

    child()
    {
      cout<<"inside default constructor of child\n";
      C= 31;
      D= 41;
    }

    void gun()
    {
      cout<<"inside gun of child\n";
    }

    ~child()
    {
      cout<<"inside destructor of child\n";
    }
};

class grandchild : public child
{
   public:
    int E,F;

    grandchild()
    {
      cout<<"inside default constructor of grandchild\n";
      E= 51;
      F= 61;
    }

    void sun()
    {
      cout<<"inside sun of grandhild\n";
    }

    ~grandchild()
    {
      cout<<"inside destuctor of grandchild\n";
    }
};

int main()
{
   cout<<"inside main\n";

   grandchild gobj;

   cout<<"size of parent:"<<sizeof(parent)<<"\n";
   cout<<"size of child:"<<sizeof(child)<<"\n";
   cout<<"size of grandchild:"<<sizeof(grandchild)<<"\n";

   cout<<"A:"<<gobj.A<<"\n";
   cout<<"B:"<<gobj.B<<"\n";
   cout<<"C:"<<gobj.C<<"\n";
   cout<<"D:"<<gobj.D<<"\n";
   cout<<"E:"<<gobj.E<<"\n";
   cout<<"F:"<<gobj.F<<"\n";

   gobj.fun();
   gobj.gun();
   gobj.sun();

   cout<<"end of main function\n";

   return 0;

}

/*
OUTPUT:
inside main
inside default constructor of parent
inside default constructor of child
inside default constructor of grandchild
size of parent:8
size of child:16
size of grandchild:24
A:11
B:21
C:31
D:41
E:51
F:61
inside fun of parent
inside gun of child
inside sun of grandhild
end of main function
inside destuctor of grandchild
inside destructor of child
inside destructor of parent
*/