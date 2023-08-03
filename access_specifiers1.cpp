#include<iostream>
using namespace std;

class base
{
    public:
    int A;

    private:
    int B;

    protected:
    int C;

    base()
    {
        cout<<"inside base constructor\n";
        A= 10;
        B= 20;
        C= 30;
    }
};

class derived : public base
{
    public:
    int X;

    void display()
    { 
        cout<<"A:"<<A<<"\n";
        //cout<<"B:"<<B<<"\n";  //NA
        cout<<"C:"<<C<<"\n";
    }
};

int main()
{
    cout<<"inside main\n";

    derived dobj;

    cout<<"A:"<<dobj.A<<"\n";
    //cout<<"B:"<<dobj.B<<"\n";  //NA
    //cout<<"C:"<<dobj.C<<"\n";  //NA
    cout<<"X:"<<dobj.X<<"\n";

    dobj.display();

    cout<<"end of main\n";

    return 0;
}