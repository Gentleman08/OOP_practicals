//Write program using array of objects
#include<iostream>

using namespace std;
class student
{
    int roll_no ;
    char name[20];

    public :
        void getdata(void) ;
        void putdata(void) ;
};

void student :: getdata(void)
{
    cout<<"Enter roll_no : " ;
    cin>>roll_no ;
    cout<<"Enter name : " ;
    cin>>name ;
}

void student :: putdata(void)
{
    cout<<"Roll no : "<<roll_no<<"\n" ;
    cout<<"Name : "<<name<<"\n" ;
}

int main()
{
    student stu[2] ;

    for(int i = 0 ; i<2 ; i++)
    {
        cout<<"\nDetails of student "<< i+1<<"\n" ;
        stu[i].getdata();
    }
    cout<<"\n";

    for(int i = 0 ; i<2 ; i++)
    {
        cout<<"\nStudent details "<< i+1<<"\n" ;
        stu[i].putdata();
    }
    return 0 ;
}
