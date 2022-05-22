//Aim :- Write a program to demonstrate use of virtual function
#include<iostream>
using namespace std ;

class Base
{
    public : 
        void display()
        {
            cout<<"\nDisplay base" ;
        }
        virtual void show()
        {
            cout<<"\nShow base" ;
        }
};
class Derived : public Base
{
    public :    
        void display()
        {
            cout<<"\nDisplay derived";
        }
        void show()
        {
            cout<<"\nShow derived";
        }
};

int main()
{
    Base B ;
    Derived D ;
    Base *bptr ;

    cout<<"\nbptr points to Base\n" ;
    bptr = &B ;
    bptr -> display() ; //Calls Base Version
    bptr -> show() ;    //Calls Base Version 
    cout<<"\n\nbptr points to Derived\n" ;

    bptr = &D ;
    bptr -> display() ;// Calls Base Version 
    bptr -> show() ;   // Calls Derived Version 

    return 0 ;
}