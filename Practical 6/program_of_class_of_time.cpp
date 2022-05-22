#include<iostream>

using namespace std ;

class time
{
    int h, m, s ;

    public :
        void get_time(int p, int q, int r)
        {
            h = p ;
            m = q ;
            s = r ;
        }
        void display_time()
        {
            cout<<"Time is "<<h<<":"<<m<<":"<<s<<endl ;
        }
};

int main()
{
    int p, q, r ;
    time t ;

    cout<<"Enter hour   :: ";
    cin>>p ;

    cout<<"Enter minute :: ";
    cin>>q ;

    cout<<"Enter second :: ";
    cin>>r ;

    t.get_time(p, q, r) ;
    t.display_time() ;

    return 0 ;
}
