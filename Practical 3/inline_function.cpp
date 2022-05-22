#include<iostream>

using namespace std ;
inline double square(double num)
{
    return(num*num);
}
int main()
{
    int num ;
    cout<<"Enter the number :: ";
    cin>>num;

    cout<<"Square of "<< num <<" is "<<square(num) ;
}
