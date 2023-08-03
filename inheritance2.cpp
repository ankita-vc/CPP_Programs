
//Multilevel inheritance..

#include<iostream>

using namespace std;

class parent1
{
   public:
    int A,B;

    parent1()
    {
      cout<<"inside default constructor of parent1\n";
      A= 11;
      B= 21;
    }

    void fun()
    {
      cout<<"inside fun of parent1\n";
    }

    ~parent1()
    {
      cout<<"inside destructor of parent1\n";
    }
};

class parent2
{
   public:
    int C,D;

    parent2()
    {
      cout<<"inside default constructor of parent2\n";
      C= 31;
      D= 41;
    }

    void gun()
    {
      cout<<"inside gun of parent2\n";
    }

    ~parent2()
    {
      cout<<"inside destructor of parent2\n";
    }
};

class child :public parent2, public parent1
{
   public:
    int E,F;

    child()
    {
      cout<<"inside default constructor of child\n";
      E= 51;
      F= 61;
    }

    void sun()
    {
      cout<<"inside sun of child\n";
    }

    ~child()
    {
      cout<<"inside destuctor of child\n";
    }
};

int main()
{
   cout<<"inside main\n";

   child cobj;

   cout<<"size of parent:"<<sizeof(parent1)<<"\n";
   cout<<"size of parent2:"<<sizeof(parent2)<<"\n";
   cout<<"size of child:"<<sizeof(child)<<"\n";

   cout<<"A:"<<cobj.A<<"\n";
   cout<<"B:"<<cobj.B<<"\n";
   cout<<"C:"<<cobj.C<<"\n";
   cout<<"D:"<<cobj.D<<"\n";
   cout<<"E:"<<cobj.E<<"\n";
   cout<<"F:"<<cobj.F<<"\n";

   cobj.fun();
   cobj.gun();
   cobj.sun();

   cout<<"end of main function\n";

   return 0;
}

/*
OUTPUT:
inside main
inside default constructor of parent2
inside default constructor of parent1
inside default constructor of child
size of parent:8
size of parent2:8
size of child:24
A:11
B:21
C:31
D:41
E:51
F:61
inside fun of parent1
inside gun of parent2
inside sun of child
end of main function
inside destuctor of child
inside destructor of parent1
inside destructor of parent2 
 */