// Write C++ Program to demonstrate function with constant arguments
#include<iostream>

using namespace std ;
int rectangle(int length , int breadth = 5);

int main()
{

    int l, area;

    cout<<"Enter the length of rectangle :: ";
    cin>>l;
    area=rectangle(l);

    cout<<"Area of circle is "<<area;
    return 0;
}

int rectangle(int length ,int breadth)
{

    int area ;
    area = length * breadth ;
    return(area);
}
