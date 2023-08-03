 
// Object oriented application 
 
 #include<iostream>

 using namespace std;

 class Arithmatic
 {
    private: 
     int no1;
     int no2;

    public:
     Arithmatic()
     {
        cout<<"inside default constructor...\n\n";
        no1= 0;
        no2= 0;
     }  
     Arithmatic(int A, int B)
     {
        cout<<"inside parametrised constructor...\n\n";
        no1= A;
        no2= B;
     }

     int Addition()
     {
        cout<<"Addition:\n";
        int Ans= 0;
        Ans= no1 + no2;
        return Ans;
     }
     int Subtraction()
     {
        cout<<"Subtraction\n";
        int Ans= 0;
        Ans= no1 - no2;
        return Ans;
     }

     ~Arithmatic()
     {
        cout<<"\n destruction\n";
     }

     void fun()
     {
        cout<<"inside fun\n";
     }

     void gun()
     {
        cout<<"inside gun\n";
     }
 };

 int main()
 {
    Arithmatic obj1(11,9);
    Arithmatic obj2;

    int Ret= 0;

    Ret= obj1.Addition();
    cout<<"Addition of two integers of obj1:"<<Ret<<"\n";
    Ret= obj1.Subtraction();
    cout<<"Subtraction of two integers of obj1:"<<Ret<<"\n\n";

    Ret= obj2.Addition();
    cout<<"Addition of two integers from obj2:"<<Ret<<"\n";
    Ret= obj2.Subtraction();
    cout<<"Subtraction of two integers of obj2:"<<Ret<<"\n\n";

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();


// below two statemets giv eerror because no1 and no2 are in private access specifiers..

//    cout<<"value of no1 from obj1:"<<obj1.no1<<"\n";
//    cout<<"value of no2 from obj1:"<<obj1.no2<<"\n";

    return 0;
 }