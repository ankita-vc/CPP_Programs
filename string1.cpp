#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char arr1[6]= {'H','E','L','L','O','\0'};
  char arr2[]= {'H','E','L','L','O','\0'};
  char arr3[]= {"HELLO"};

  cout<<"size of arr1:"<<sizeof(arr1)<<"\n";
  cout<<"size of arr2:"<<sizeof(arr2)<<"\n";
  cout<<"size of arr3:"<<sizeof(arr3)<<"\n";

  cout<<"size of arr1:"<<strlen(arr1)<<"\n";
  cout<<"size of arr2:"<<strlen(arr2)<<"\n";
  cout<<"size of arr3:"<<strlen(arr3)<<"\n";
 
  return 0; 
}