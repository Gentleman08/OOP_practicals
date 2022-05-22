//Aim :- Write program for formatting with flags in setf() 
#include<iostream>
using namespace std ;

int main()
{
    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout<<"C++";

    cout.fill('*');
    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout<<"Programming";
}