#include<iostream>
using namespace std ;

int main()
{
    int x, y ;

    cout<<"Enter first value from keyboard :: " ;
    cin>>x ;

    cout<<"Enter second value from keyboard :: " ;
    cin>>y ;

    if(x == y)
        cout<<"Both values are equal" ;
    else if(x > y)
        cout<<"First value is greater" ;
    else if(y > x)
        cout<<"Second value is greater" ;
}
