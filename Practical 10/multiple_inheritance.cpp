// Aim :- Write program using multiple inheritance
#include<iostream>
using namespace std ;

class A
{
    public : 
        int num1 ;
};
class B 
{
    public : 
        int num2 ;
};
class C 
{
    public : 
        int num3 ;
};
class D : public A, public B, public C  
{
    public :
        int ans ; 

        void input()
        {
            cout<<"Enter three numbers : ";
            cin>> num1 ;
            cin>> num2 ;
            cin>> num3 ;
        }
        void mul()
        {
            ans = num1 * num2 * num3 ;
        }
        void display()
        {
            cout<<"Multiplication of 3 numbers is : "<<ans << endl ;
        }
};

int main()
{
    D d ;
    d.input() ;
    d.mul();
    d.display() ;
    return 0;
}