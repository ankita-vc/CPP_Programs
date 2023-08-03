#include<iostream>
using namespace std;


class demo
{
    public:
     int A;
     int B;

     demo(int i= 12, int j= 22)
     {
        A= i;
        B= j; 
     }
};

int main()
{
    demo obj1;
    demo obj2(11);  
    demo obj3(11,21);

    cout<<"obj1.A:"<<obj1.A<<"\n";
    cout<<"obj1.B:"<<obj1.B<<"\n";

    cout<<"obj2.A:"<<obj2.A<<"\n";
    cout<<"obj2.B:"<<obj2.B<<"\n";

    cout<<"obj3.A:"<<obj3.A<<"\n";
    cout<<"obj3.B:"<<obj3.B<<"\n";

    cout<<"sizeof obj1:"<<sizeof(obj1)<<"\n";
    cout<<"sizeof obj2:"<<sizeof(obj2)<<"\n";
    cout<<"sizeof obj3:"<<sizeof(obj3)<<"\n";

    return 0;
}