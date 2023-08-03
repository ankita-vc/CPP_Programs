#include<iostream>

using namespace std;

class demo
{
    public:

    int no1;
    int no2;

    void fun()
    {
        cout<<"inside function, (object)\n";
    }
};

int main()
{
    class demo obj1;
    class demo obj2;

    cout<<"size of object:"<<sizeof(obj1)<<"\n";

    obj1.no1= 10;
    obj1.no2= 20;

    obj2.no1= 30;
    obj2.no2= 40;

    obj1.fun();
    cout<<obj1.no1<<"\n";
    cout<<obj1.no2<<"\n";

    obj2.fun();
    cout<<obj2.no1<<"\n";
    cout<<obj2.no2<<"\n";

    return 0;
}