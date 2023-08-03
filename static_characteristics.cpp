#include<iostream>

using namespace std;

class demo
{
    public:
    int A,B;      //non static characteristics
    static int X,Y;  //static characteristics

    demo()   //default costructor
    {
        //initialization of non static characteristics
        A= 10;
        B= 20;
    }   
};

// initialization of static characteristics

int demo::X= 10;
int demo::Y= 20;

int main()
{
    cout<<"value of X:"<<demo::X<<"\n";
    cout<<"value of Y:"<<demo::Y<<"\n";
    
    demo obj1;
    demo obj2;

    cout<<"value of A from obj1:"<<obj1.A<<"\n";
    cout<<"value of A from obj2:"<<obj2.A<<"\n";

    obj1.A++;

    cout<<"value of A from obj1:"<<obj1.A<<"\n";
    cout<<"value of A from obj2:"<<obj2.A<<"\n";

    cout<<"value of X from obj1:"<<obj1.X<<"\n";
    cout<<"value of X from obj2:"<<obj2.X<<"\n";

    cout<<"size of demo class object is:"<<sizeof(obj1)<<"\n";
    cout<<"size of demo class object is:"<<sizeof(demo::X)<<"\n";


    return 0;
}