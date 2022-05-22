//Aim :- Write program using Hybrid Inheritance
#include<iostream>
using namespace std ;
class Vehicle 
{
    public :
        void vehicle()
        {
            cout<<"This is a vehicle\n";
        } 
};
class Car : public Vehicle 
{
    public :
        void car()
        {
            cout<<"This is a Car\n";
        }
};
class Racing 
{
    public :    
        void racing()
        {
            cout<<"This is for Racing\n" ;
        }
};
class Ferrari : public Car, public Racing 
{
    public : 
        void ferrari()
        {
            cout<<"Ferrari is a Racing Car\n" ;
        }
}; 

int main()
{
    Ferrari f ;
    f.vehicle() ;
    f.car();
    f.racing();
    f.ferrari();
    
    return 0 ;
}