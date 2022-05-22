// Aim :- Write program using multilevel inheritance
#include<iostream>
using namespace std ;

class A 
{
    public : 
        int num1;
};

class B : public A 
{
    public : 
        int num2;
};

class C : public B 
{
    public :
        int num3; 
        int ans;
    void input()
    {
        cout<<"Enter three numbers : ";
        cin>>num1 >>num2 >>num3 ;
    }
    void add()
    {
        ans = num1 + num2 + num3 ; 
    }
    void display ()
    {
        cout<<"Addition of 3 numbers : "<<ans<< endl ;
    }
};

int main()
{
    C c ;
    c.input() ;
    c.add() ;
    c.display();    
}