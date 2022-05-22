//Aim :- Write program for destructor 
#include<iostream>
using namespace std ;

class Employee
{
    public :
        Employee()
        {
            cout<<"Constructor Invoked\n" ;
        }
        ~Employee()
        {
            cout<<"Destructor Invoked\n" ;
        }
};

int main()
{
    Employee E1 ;
    {
        Employee E2 ;
    }
}