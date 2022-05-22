//Write program for class "Student" with data member & member functions
#include<iostream>
#include<cstring>

using namespace std ;
class stu
{
    int roll_no ;
    char name[40] ;
    char gender ;

    public :
            void input_data(int , char *, char);
            void output_data();
};
int main()
{
    stu stu1, stu2 ;

    stu1.input_data(91, "Sara", 'F');
    stu1.output_data();

    stu2.input_data(92, "John", 'M');
    stu2.output_data();

    return 0;
}

void stu :: input_data(int roll, char na[], char sex)
{
    int i, len ;
    roll_no = roll ;
    strcpy(name, na);           //syntax of strcpy(destination, source)
    gender = sex ;
}

void stu :: output_data()
{
    cout<<"Roll number :: "<<roll_no<<endl;
    cout<<"Name        :: "<<name<<endl;
    cout<<"Gender      :: "<<gender<<endl<<endl;
}
