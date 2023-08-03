#include<iostream>
using namespace std;

float area(float r, float PI= 3.14)
{
    float ans= r*r*PI;

    return ans;
}

int main()
{
    float radius= 0;
    float fret= 0;

    cout<<"enter the radius of circle:\n";
    cin>>radius;

    fret= area(radius);

    cout<<"the area of circle is:"<<fret<<"\n";

    return 0;
}


