// Aim :- Write program using single inheritance
#include<iostream>
using namespace std ;

class A 
{
    int num1, num2;
    public : 
        void input()
        {
            cout<<"Enter num1 : ";
            cin>>num1 ;

            cout<<"Enter num2 : ";
            cin>>num2;
        }
        int mul()
        {
            int answer = num1 * num2 ;
            return answer ;
        }
};

class B : public A 
{
    public : 
        void display()
        {
            int ans = mul(); 
            cout<<"Multipliction of a and b : "<<ans<<endl ;
        }
};

int main()
{
    B b ;
    b.input() ;
    b.mul() ;
    b.display(); 
    return 0;
}