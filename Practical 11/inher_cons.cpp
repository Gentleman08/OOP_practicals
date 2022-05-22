//Aim :- Develop programs using inheritance and constructors
#include<iostream>
using namespace std ;

//base class 
class alpha
{
    int x ;
    public : 
        alpha(int i)
        {
            x = i ;
            cout<<"alpha initialized \n" ;
        }
        void show_x(void)
        {
            cout<<"x = "<<x<<"\n";
        } 
};

//base class
class beta
{
    float y ;
    public : 
        beta(float j)
        {
            y = j ;
            cout<<"beta initialized \n" ;
        }
        void show_y(void)
        {
            cout<<"y = "<<y<<"\n" ;
        }
};

//derived class 
//output "beta initialized" is printed before alpha because in the header line of constructor of derived 
//class we have declared beta first 
class gamma: public beta, public alpha 
{
    int z ;
    public :
        gamma(int a, float b, int c):
            alpha(a), beta(b)
        {
            z = c ;
            cout<< "gamma initialized\n" ;
        } 
        void show_z(void)
        {
            cout<<"z = "<< z<<"\n";
        }
};
int main()
{
    gamma g(2, 23.4, 4);
    cout<<"\n";
    g.show_x();
    g.show_y();
    g.show_z();
    return 0 ;
}