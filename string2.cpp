#include<iostream>
using namespace std;

int strlenx(char *str)
{
    int cntr= 0;
    
    while(*str!= '\0')
    {
        cntr++;
        str++;
    }

    return cntr;
}

int main()
{
    char arr[10];
    int iret= 0;

    cout<<"enter your name:\n";
    cin>>arr;

    iret= strlenx(arr);

    cout<<"the length of your name is:"<<iret<<"\n";

    return 0;
}