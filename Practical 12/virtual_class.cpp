// Aim :- Develop programs using virtual base class

#include<iostream>
using namespace std ;

class A 
{
    public:
        int num1, num2 ;
        void input()
        {
            cout<<"Enter num 1 : ";
            cin>> num1 ;
            cout<<"Enter num 2 : ";
            cin>> num2 ;
        }        
};
class B : public virtual A
{
    public: 
        int ans_1;
        void add()
        {
            ans_1 = num1 + num2 ;
            cout<<"\nAddition of two numbers : "<<ans_1 ;
        }
};
class C : virtual public A
{
    public:
        int ans_2 ;
        void sub()
        {
            ans_2= num1 - num2 ;
            cout<<"\nSubtraction of two numbers : "<<ans_2 ;
        }
};
class D : public B, public C 
{
    public : 
        int ans ;
        void mul()
        {
            ans = num1 * num2 ;
            cout<<"\nMultiplication of two numbers : "<<ans ;
        }

};

int main()
{
    D d ;
    d.input();
    d.add();
    d.sub();
    d.mul(); 

    return 0;
}