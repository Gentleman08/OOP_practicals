//Write program for class "shape" with data member & member functions
#include<iostream>
#include<cstring>

using namespace std ;
class shape
{
    int serial_no ;
    char shape[20] ;

    public :
            void input_data(int , char *);
            void output_data();
};
int main()
{
    shape sh_1, sh_2 ;

    sh_1.input_data(1, "Circle");
    sh_1.output_data();

    sh_2.input_data(2, "Square");
    sh_2.output_data();

    return 0;
}

void shape :: input_data(int s_no, char sh[])
{
    serial_no = s_no ;
    strcpy(shape, sh);          //syntax of strcpy(destination, source)
}

void shape :: output_data()
{
    cout<<"Serial number  :: "<<serial_no<<endl;
    cout<<"Shape          :: "<<shape<<endl<<endl;
}
