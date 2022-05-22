// Write a program to find area of a square using default argument
#include<iostream>

using namespace std ;
int area_of_side(int side = 4)
{
    return(side*side);
}

int main()
{
    cout<< "Area of square:: "<< area_of_side() ;

    return 0;
}
