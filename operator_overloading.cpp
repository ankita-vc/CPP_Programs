#include<iostream>
using namespace std;

class demo
{
    public:
     int a;
     int b;

     demo(int i= 1, int j= 2)
     {
        cout<<"inside constructor:\n";
        a= i;
        b= j;
     }

     friend demo operator + (demo op1, demo op2);

/*     friend demo operator - (demo op1, demo op2);
     friend demo operator * (demo op1, demo op2);
     friend demo operator / (demo op1, demo op2);
*/     
};

demo operator +(demo op1,demo op2)
{
    cout<<"inside + operator"<<"\n";
    return demo((op1.a + op2.a),(op1.b + op2.b));
}

/*
demo operator -(demo op1,demo op2)
{
    cout<<"inside - operator"<<"\n";
    return demo(op1.a - op2.a),(op1.b - op2.b);
}

demo operator *(demo op1,demo op2)
{
    cout<<"inside  *operator"<<"\n";
    return demo(op1.a * op2.a),(op1.b * op2.b);
}

demo operator /(demo op1,demo op2)
{
    cout<<"inside / operator"<<"\n";
    return demo(op1.a/ op2.a),(op1.b / op2.b);
}
*/

int main()
{
    demo obj1(10, 20);
    demo obj2(50, 10);
    demo obj(0,0);

    obj= obj1 + obj2;

    cout<<"obj.a:"<<obj.a<<"\n";
    cout<<"obj.b:"<<obj.b<<"\n";

    return 0;
}