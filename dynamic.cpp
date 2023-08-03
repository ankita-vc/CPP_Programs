#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int arr[5];    //static memory
    
    cout<<"memory allocation in C\n";

    int *p= NULL;
    p= (int*)malloc(5*(sizeof(int)));  //Dynamic memory allocation by using malloc
/*
  malloac accepts number of elements/variables with sizeof datatype
*/

    int *q= NULL;
    q= (int*)calloc(5,sizeof(int));   //Dynamic memory allocation by using calloc
/*
  calloac accepts number of elements/variables and sizeof datatype
*/  

    cout<<"memory alloaction in C++\n";
    int *X= NULL;
    X= new int [5];

    cout<<"memory deallocation in C\n";
    free(p);
    free(q);

    cout<<"memory deallocation in C++\n";
    delete[] X;

    return 0;
}