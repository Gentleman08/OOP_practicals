// Aim :- Write a program using static member function 
#include<iostream>
using namespace std ;

class Demo
{
    static int x , y ;

    public : 
        static void Print()
        {
            cout<<"Value of x : "<< x << "\n" ;
            cout<<"Value of y : "<< y << "\n" ;
        }
};

int Demo :: x = 10 ;
int Demo :: y = 20 ;

int main()
{
    Demo ob ;
    cout<<"Printing through object name \n" ;
    ob.Print() ;

    cout<<"Printing through class name \n" ;
    Demo :: Print() ;

    return 0 ;
}