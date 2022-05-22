//Aim :- Write a program for overloading Unary Minus operator 
#include<iostream>
using namespace std ;

class Distance 
{
    int feet, inches ;
    public : 
        //Constructor 
        Distance(int f, int i)
        {
            feet = f ;
            inches = i ;
        }

        //method to display object 
        void display()
        {
            cout<<"Feet : " <<feet<< "  Inches : " <<inches<< "\n" ;
        } 
        //overloaded unary minus '-' operator 
        Distance operator -()
        {
            feet = - feet ;
            inches = - inches ;
            return Distance(feet, inches);
        } 
};

int main()
{
    Distance D1(2, 7), D2(-8, -1) ;
    -D1 ;
    D1.display();
    -D2 ;
    D2.display();
    return 0 ;
}