//Aim :- Write program using static data member
// Reference :- https://www.codewithharry.com/videos/cpp-tutorials-in-hindi-24/
#include<iostream>

using namespace std ;
class Employee
{
    int id ;
    static int count ; 

    public : 
        void setData(void)
        {
            cout<<"Enter the id : " ;
            cin>>id ;
            count++ ; 
        }
        void getData(void)
        {
            cout<<"The id of this Employee is "<< id<< "\n";
            cout<<"The employee number is "<< count << "\n" ;
            cout<<"The value of count is "<< count<<"\n" ;
        }

/*        static void getCount(void)
        {
            // cout<< id ; // Throws an error
            cout<<"The value of count is "<< count<<"\n" ;
        } 
*/
};

int Employee :: count ;

int main()
{
    Employee andy, monica, lovish ; 

    andy.setData();
    andy.getData();

    monica.setData();
    monica.getData();
    
    lovish.setData();
    lovish.getData();
   
    return 0; 
}