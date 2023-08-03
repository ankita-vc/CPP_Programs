#include<iostream>

using namespace std;

class demo
{
    public:
     int no1;
     int no2;

     demo(int i, int j)
     {
        cout<<"inside parmetrised constructor\n";
        no1= i;
        no2= j;
     }

     void fun(int A, int B)    //void fun(demo *this, int A, int B)
     {
        cout<<"insidde fun:"<<this->no1<<"\n";
        cout<<"insidde fun:"<<this->no2<<"\n";
     }

     void gun(int A)         //void gun(demo *this, int A)
     {
        cout<<"insidde gun:"<<this->no1<<"\n";
        cout<<"insidde gun:"<<this->no2<<"\n";
     }
};

int main()
{
    demo obj1(11,21);
    demo obj2(51,101);

    obj1.fun(10,20);    //fun(&obj1,10,20)   fun(100, 10, 20)

    obj2.gun(10);       //gun(&obj2,10)    gun(200, 10)

    return 0;
}

/* 
Every C++ program get internally conveted into C program.. 

only parametrised constructors use the concept of this pointer.
*/
