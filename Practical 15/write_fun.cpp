//Aim :- Write program to display strings using write fuctions 
#include<iostream>
using namespace std ;

int main()
{
    int size = 30, i = 0 ;
    char full_name[30] ;

    cout<<"Enter your full name : ";
    cin.getline(full_name, size) ;
    
    for(i = 0; full_name[i] != ' '; i++);

    cout.write(full_name, i) ;

    return 0 ;
}