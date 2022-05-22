#include<iostream>

using namespace std ;

int main()
{
    int r, sp, p, n, no ;

    r = 1 ;
    n = 5 ;
    no = n ;
    while(r <= no)
    {
        sp = 1 ;
        while(sp <= n)
        {
            cout<<" " ;
            sp++ ;
        }
        n-- ;

        p = 1 ;
        while(p<= r)
        {
            cout<<r<<" " ;
            p++;
        }
        cout<<"\n";
        r++;
    }
}
