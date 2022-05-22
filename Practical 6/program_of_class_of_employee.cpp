//Write program for class "Employee" with data member & member functions
#include<iostream>
#include<cstring>

using namespace std ;
class employee
{
    int employee_id ;
    char name[30] ;

    public :
            void input_data(int , char *);
            void output_data();
};
int main()
{
    employee em_1, em_2 ;

    em_1.input_data(91, "Sara");
    em_1.output_data();

    em_2.input_data(92, "John");
    em_2.output_data();

    return 0;
}

void employee :: input_data(int em_id, char na[])
{
    employee_id = em_id ;
    strcpy(name, na);          //syntax of strcpy(destination, source)
}

void employee :: output_data()
{
    cout<<"Employee Id    :: "<<employee_id<<endl;
    cout<<"Name           :: "<<name<<endl<<endl;
}
