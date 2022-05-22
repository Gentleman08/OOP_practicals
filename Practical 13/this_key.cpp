//Aim :- Develop programs using 'this' keyword 
//In C++ programming, this is a keyword that refers to the current instance of the class. 
//There can be 3 main usage of this keyword in C++.

//    1. It can be used to pass current object as a parameter to another method.
//    2. It can be used to refer current class instance variable.
//    3. It can be used to declare indexers.

#include<iostream>
using namespace std ;

class Employee
{
    public : 
        int id ;
        string name ;
        float salary ;

        Employee(int id, string name, float salary)
        {
            this->id = id ;
            this->name = name ;
            this->salary = salary ;
        }

        void display()
        {
            cout<<id <<" "<< name <<" "<< salary <<endl ;
        }
};

int main()
{
    Employee e1 = Employee(201, "Vision", 90000) ;
    Employee e2 = Employee(202, "Wanda", 100000) ;

    e1.display() ;
    e2.display() ;
    return 0;
}