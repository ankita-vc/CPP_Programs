#include<iostream>
using namespace std;

class base
{
  public:
  int i,j;

  int addition(int i, int j)  //concreat function
  {
    cout<<"add of base\n";
     return i + j;
  }

  virtual int subtraction(int i, int j)   //concreat function
  {
    cout<<"sub od base\n";
    return i - j;
  }

  virtual int multiplication(int i, int j)= 0;  //abstract function
  
};

class derived : public base 
{
  public:
  int x,y;

  int subtraction(int i, int j)
  {
    cout<<"sub of derived\n";
    int ans= 0;
    ans= i-j;
    return ans;
  }

  int multiplication(int i, int j)
  {
    cout<<"mult of derived\n";
    return i*j;
  }

};

int main()
{
   cout<<"inside main\n";
  //base bobj;   //NA

  base *bp= new derived();

  int ret= 0;

  ret= bp->addition(10,11);
  cout<<"addition is:"<<ret<<"\n";

  ret= bp->subtraction(10,11);
  cout<<"subtraction is:"<<ret<<"\n";

  ret= bp->multiplication(10,11);
  cout<<"multiplication is:"<<ret<<"\n";

  return 0;
}



/*
OUTPUT:
inside main
add of base
addition is:21
sub of derived
subtraction is:-1
mult of derived
multiplication is:110 

*/