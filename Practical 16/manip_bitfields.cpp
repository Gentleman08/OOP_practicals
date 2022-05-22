//Aim :- Write program for manipulation of flag and bit fields 
#include<iostream>
using namespace std ;

int main()
{
    int num ;
    cout<<"Enter an integer value : " ;
    cin>> num ;

    cout<<"\nHexadecimal equivalent : " ;
    cout.setf(ios::hex, ios::basefield) ;
    cout<<num ;

    cout<<"\nOctal equivalent : ";
    cout.setf(ios::oct, ios::basefield);
    cout<<num ;

    cout.setf(ios::dec, ios::basefield);
}