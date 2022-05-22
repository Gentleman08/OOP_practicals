//Aim :- Write program for copy constructor 
#include<iostream>
using namespace std ;

class point
{
    //private variables named x and y are declared to represent co-ordinates of x and y 
    int x, y ;
    public : 
        //parameterized constructor
        point(int num1, int num2)
        {
            x = num1, y = num2 ;
        }
        
        //copy constructor
        point(point &obj)
        {
            x = obj.x, y = obj.y ;
        }

        //Function to return the value of private varible x
        int getX()
        {
            return x ;
        } 
        
        //Function to return the value of private variable y
        int getY()
        {
            return y ;
        }
};

int main()
{
    point p1(12 ,34) ;
    point p2(p1) ;

    cout<<"p1.x = "<<p1.getX()<<", p1.y = "<<p1.getY() ;
    cout<<"\np2.x = "<<p2.getX()<<", p2.y = "<<p2.getY() ;
}