#include<iostream>
using namespace std;


class demo
{
    public:
     inline void fun()
     {
        cout<<"inside fun\n";
     }
};

int main()
{
    demo obj;

    obj.fun();   //this calls the statement cout<<"inside fun"<<"\n"; internally

    return 0;
}