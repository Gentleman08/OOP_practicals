//Write program for class "shape" with data member & member functions
#include<iostream>
#include<opencv.hpp>

using namespace std ;
class shape
{
    int serial_no ;
    char shape[20] ;
    char location[50] ;

    public :
            void input_data(int , char *, char *);
            void output_data();
};
int main()
{
    shape sh_1, sh_2 ;

    sh_1.input_data(1, "Circle", H:\Sem-4\OOP\Practical 6\circle.png"");
    sh_1.output_data();

    sh_2.input_data(2, "square", "H:\Sem-4\OOP\Practical 6\square.jpg");
    sh_2.output_data();

    return 0;
}

void shape :: input_data(int s_no, char sh[], char loc[])
{
    serial_no = s_no ;
    strcpy(shape, sh);          //syntax of strcpy(destination, source)
    strcpy(location, loc);
}

void stu :: output_data()
{
    cout<<"Serial number :: "<<serial_no<<endl;
    cout<<"Shape          :: "<<shape<<endl;

    Mat image = imread(location);
    if(image.empty())
    {
        cout<<"Image file not found"<<endl ;
        cin.get();
        }
    imshow(shape, image) ;
    waitKey(0);

}
