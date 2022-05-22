#include<iostream>
using namespace std ;

int main()
{
    int score ;
    char grade ;

    cout<<"Enter your score(0 - 100) :: " ;
    cin>> score ;

    if(score < 0 || score > 100)
    {
        cout<<"Invalid Score"<<endl ;
        return 0;
    }
    switch(score/10)
    {
        case 10 :
        case 9 :
            grade = 'A' ;
            break ;
        case 8 :
            grade = 'B' ;
            break ;
        case 7 :
            grade = 'C' ;
            break ;
        case 6 :
            grade = 'E' ;
            break ;
        default :
            grade = 'F' ;
    }
    cout<<"Grade : "<<grade<< endl ;
}
