//Aim :- Write a program for overloading Binary + Operator 
//This program adds two objects using binary plus(+) operator 

#include<iostream>
using namespace std ;

class NUM
{
    int n ;
    public : 
        //function to get number 
        void getNum(int x)
        {
            n = x ;
        }

        //function to display number 
        void display()
        {
            cout<<"Number is : "<< n ; 
        }
        //add two objects - Binary Plus(+) operator overloading 
        NUM operator +(NUM &obj)
        {
            NUM x ; //Creates another object 
            x.n = this -> n + obj.n ;
            return x ; //return object   
        }
};

int main()
{
    NUM num1, num2 , sum ;
    num1.getNum(23) ;
    num2.getNum(21);

    //add two objects 
    sum = num1 + num2 ;

    sum.display() ;
    cout<<endl ;
    return 0 ;    
}