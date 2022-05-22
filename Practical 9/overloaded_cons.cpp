//Aim :- Write progra for overloaded constructor 
#include<iostream>
using namespace std ;

class point
{
    //Private variables x, y to represent co-ordinates of a point on cartesian
    int x, y ;

    public : 
        //Default Constructor 
        point()
        {
            x = 0 , y = 0 ;
        }

        //Parameterized Constructor 
        point(int num1, int num2)
        {
            x = num1, y = num2 ;
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
    point p1, p2(1 ,23);
    
    cout<<"p1.x = "<<p1.getX()<<", p1.y = "<<p1.getY() ;
    cout<<"\np2.x = "<<p2.getX()<<", p2.y = "<<p2.getY() ;
}