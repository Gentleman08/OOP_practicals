// Write a Program to compute the area of a circle by overloading the area() function
#include <iostream>
using namespace std;

void ar_of_circle(int r);
void ar_of_circle(double r);

int main()
{
   ar_of_circle(5);
   ar_of_circle(5.23);
   return 0;
}

void ar_of_circle(int r)
{
    int area ;
    area = r*r*3.14 ;
    cout<<"Area of Circle :: "<<area<<endl;
}

void ar_of_circle(double r)
{
    float area ;
    area = r*r*3.14 ;
    cout<<"Area of Circle :: "<<area<<endl;
}
