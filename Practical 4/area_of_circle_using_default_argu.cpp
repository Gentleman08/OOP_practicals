// Write a Program to calculate area of circle using default arguments
#include<iostream>

using namespace std ;
float area_of_circle(float r, float pie = 3.14)
{
    return(pie*r*r);
}

int main()
{
    float radius ;

    cout<< "Enter radius of circle :: " ;
    cin>> radius ;

    cout<< "Area of Circle :: "<< area_of_circle(radius) ;

    return 0;
}
