//Aim :- Write a program using hierarchical inheritance
#include<iostream>
using namespace std ;

class A 
{
    public : 
        int num1, num2, ans ;
        void input()
        {
            cout<<"Enter two Numbers : " ;
            cin>>num1 >> num2 ;
        }
};

class B : public A 
{
    public : 
        void add()
        {
            ans = num1 + num2 ;
        }
        void display()
        {
            cout<<"Addition of two numbers : "<<ans<<endl;
        }
};
class C : public A 
{
    public : 
        void sub()
        {
            ans = num1 - num2 ;
        }
        void display()
        {
            cout<<"Subtraction of two numbers : "<<ans<<endl;
        }
};
class D : public A 
{
    public : 
        void mul()
        {
            ans = num1 * num2 ;
        }
        void display()
        {
            cout<<"Multiplication of two numbers : "<<ans<<endl;
        }
};

int main()
{
    B b ;
    C c ;
    D d ;
    
    b.input();
    b.add();
    b.display();

    c.sub();
    c.display();
    
    d.mul();
    d.display();
}