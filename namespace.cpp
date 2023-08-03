#include<iostream>

namespace marvellous
{
    class demo
    {
        public:
         int A;
         int B;

         demo(int i= 11, int j= 21)
         {
            A= i;
            B= j;
         }
    };
}

namespace infosystem
{
    class hello
    {
        public:
         int A;

         hello(int k= 101)
         {
            A= k;
         }
    };
}

using namespace marvellous;

int main()
{
    demo mobj;
    infosystem::hello obj;

    std::cout<<"inside main"<<"\n";

    std::cout<<"mobj.A"<<mobj.A<<"\n";
    std::cout<<"mobj.B"<<mobj.B<<"\n";

    std::cout<<"mobj.A"<<obj.A<<"\n";

    return 0;
}