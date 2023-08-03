
//Check whether the number is odd or even by using bolean datatype

#include<iostream>

using namespace std;

bool CheckEven(int no)
{
    if((no%2)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
 
int main()
{
    int value= 0;
    bool bRet= 0;

    cout<<"enter the number:\n";
    cin>>value;

    bRet= CheckEven(value);

    if(bRet==true)
    {
        cout<<"it is an even number\n";
    }
    else
    {
        cout<<"it is an odd number\n"; 
    }
} 
