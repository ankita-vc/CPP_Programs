#include<iostream>

using namespace std;

class demo
{
    public:

    int no1;
    int no2;

    demo()
    {
        cout<<"inside default constructor..\n";
        no1= 0;
        no2= 0;
    }

    demo(int A, int B)
    {
        cout<<"inside parametrised constructor..\n";
        no1= A;
        no2= B;
    }

    demo(demo &ref)
    {
        cout<<"inside copy constructor..\n";
        no1= ref.no1;
        no2= ref.no2;
    }

    ~demo()
    {
        cout<<"destruction..\n";
    }

    void fun()
    {
        cout<<"inside fun..\n";
    }

    void gun()
    {
        cout<<"inside gun..\n";
    }
};

int main()
{
    cout<<"inside main..\n";

    demo obj1;
    cout<<"the value of no1 from obj1:"<<obj1.no1<<"\n";
    cout<<"the value of no2 from obj1:"<<obj1.no2<<"\n";

    demo obj2(11, 21);
    cout<<"the value of no1 from obj2:"<<obj2.no1<<"\n";
    cout<<"the value of no2 from obj2:"<<obj2.no2<<"\n";

    demo obj3(obj2);
    cout<<"the value of no1 from obj3:"<<obj3.no1<<"\n";
    cout<<"the value of no2 from obj3:"<<obj3.no2<<"\n";

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();

    obj3.fun();
    obj3.gun();

    return 0;
}