#include<iostream>

using namespace std;

class demo
{
    public:
    int Addition(int A, int B)      //Addition@2ii(&obj,int A, int B)
    {
        cout<<"from class, addition of two integers\n";
        return A+B;
    }
    
    int Addition(int A, int B, int C)    //Addition@3iii(&obj,int A, int B, int C)
    {
        cout<<"from class, addition of three integers\n";
        return A+B+C;
    }

    float Addition(float A, float B)    //Addition@2ff(&obj,float A, float B)
    {
        cout<<"from class, addition of two floats\n";
        return A+B;
    }

    double Addition(double A, double B)    //Addition@2dd(&obj,double A, double B)
    {
        cout<<"from class, addition of two doubles\n";
        return A+B;
    } 
};

int main()
{
    demo obj;

    int iRet= obj.Addition(10, 21);           //Addition@2ii(&obj,10,21)
    cout<<"Addition 2ii:"<<iRet<<"\n";

    iRet= obj.Addition(10, 21, 51);            //Addition@3iii(&obj,10,21,51)
    cout<<"Addition 3iii:"<<iRet<<"\n";

    float fRet= obj.Addition(10.5f, 90.7f);    //Addition@2ff(&obj,10.5f, 90.7f)
    cout<<"Addition 2ff:"<<fRet<<"\n"; 

    double dRet= obj.Addition(10.5, 90.7);     //Addition@2ii(&obj,10.5, 90.7)
    cout<<"Addition 2dd:"<<dRet<<"\n";
}