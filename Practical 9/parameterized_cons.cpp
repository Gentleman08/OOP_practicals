//Aim :- Write program for parameterized construuctor 
#include<iostream>
using namespace std ;

class point
{
    int x, y ;

    public : 
        //Parameterized Constructor 
        point(int num1,int num2)
        {
            x = num1 , y = num2 ;
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
    //Constructor Called
    point p1(10,12);

    //Acess values assigned by constructor  
    cout<<"p1.x = "<<p1.getX()<<", p1.y = "<<p1.getY() ;  
}