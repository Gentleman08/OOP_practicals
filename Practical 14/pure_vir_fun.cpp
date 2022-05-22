//Aim :- Write program to demonstrate use of Pure Virtual Funciton 
#include<iostream>
using namespace std ;

class Base 
{
    int x ;
    public : 
        virtual void fun() = 0 ; //Denotes pure virtual Function defination  
        int getX()
        {
            return 0 ; 
        }
};

//This class inherits from Base and implements fun() 
class Derived : public Base 
{
    public :
        void fun()
        {
            cout<<"fun() called";
        }
}; 

int main()
{
    Derived d ;
    d.fun() ;
    return 0 ; 
}