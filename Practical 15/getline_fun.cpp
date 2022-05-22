//Aim :- Write program for reading strings with getline() functions 
#include<iostream>
using namespace std ;


int main()
{
    int size = 30 ;
    char full_name[30] ;

    cout<<"Enter your full name: " ;
    cin.getline(full_name, size);
    cout<<"Your name is "<< full_name <<"\n\n" ;
    return 0 ;
}