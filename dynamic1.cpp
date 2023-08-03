#include<iostream>

using namespace std;

class demo
{
    public:
    int A, B;

    demo()
    {
        cout<<"inside default constructor"<<"\n";
    }

    demo(int i, int j)
    {
        cout<<"inside parametrised constructor\n";
    }

    ~demo()
    {
        cout<<"inside destructor\n";
    }
};

int main()
{
    cout<<"inside main\n";

    demo obj1;           //static memory allocation of object
    demo obj2(11,21);    //static memory allocation of object

    demo *p= new demo();      //dynamic memory allocation of object
    demo *q= new demo(11,21);  //dynamic memory allocation of object

    delete p;
    delete q;

    cout<<"end of main\n";

    return 0;
}

/*
Only dynamic memory get destructed at line no 36 and 37 as it specifies to dealloacte the memory(delete x)

static memory get deallocate at the end of main function



OUTPUT:
inside main
inside default constructor
inside parametrised constructor
inside default constructor
inside parametrised constructor
inside destructor
inside destructor
end of main
inside destructor
inside destructor

*/