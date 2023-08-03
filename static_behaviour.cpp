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

    void fun() //void fun(demo *this)
    {
        cout<<"inside non static function fun"<<"\n";
        cout<<"value of A:"<<this->A<<"\n";
        cout<<"value of B:"<<this->B<<"\n";
        cout<<"value of X:"<<X<<"\n";
        cout<<"value of Y:"<<Y<<"\n";   
    } 

    static void gun() //static void gun()
    {
        cout<<"inside static function gun"<<"\n";
        cout<<"value of X:"<<X<<"\n";
        cout<<"value of Y:"<<Y<<"\n";
    }

};

//initialization of static characteristics

int demo::X= 30;
int demo::Y= 40;

static void sun()
{
    cout<<"inside static sun\n";
}

int main()
{
    demo::gun();
    sun();
    
    demo obj;
    
    obj.fun(); //fun(&obj)
 //   obj.gun();   //avoid kra

    return 0;
}