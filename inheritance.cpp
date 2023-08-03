#include<iostream>

using namespace std;

class base
{
   public:
   int A,B;

   base()
   {
      cout<<"inside base constructor\n";
      A= 11;
      B= 21;
   }

   ~base()
   {
      cout<<"inside base destructor\n";
   }

   void fun()
   {
      cout<<"inside fun of base\n";
   }
};

class derived : public base    //class hello extends demo(java)
{
   public:
   int X,Y;

   derived()
   {
      cout<<"inside derived constructor\n";
      X= 51;
      Y= 101;
   }

   ~derived()
   {
      cout<<"inside derived destructor\n";
   }

   void gun()
   {
      cout<<"inside gun of derived\n";
   }
   
};

int main()
{
   cout<<"inside main\n";

   derived dobj;
   
   cout<<"A:"<<dobj.A<<"\n";
   cout<<"B:"<<dobj.B<<"\n";
   cout<<"X:"<<dobj.X<<"\n";
   cout<<"Y:"<<dobj.Y<<"\n";

   cout<<"size of derived:"<<sizeof(dobj)<<"\n";

   cout<<"end of main\n";

   return 0;
}

/*
OUTPUT:
inside main
inside base constructor
inside derived constructor
A:11
B:21
X:51
Y:101
size of derived:16
end of main
inside derived destructor
inside base destructor
*/