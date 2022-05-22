// Write a Program to find addition of two numbers using overloaded function
#include <iostream>
using namespace std;

void add(int num1, int num2);
void add(int num1, double num2);
void add(double num1, int num2);
int main()
{
    add(10, 10);
    add(10, 10.10);
    add(10.10, 10);

    return 0;
}

void add(int num1, int num2)
{
    cout << "Addition : " <<(num1+num2)<< endl;
}
void add(int num1, double num2)
{
    cout << "Addition : " <<(num1+num2)<< endl;
}
void add(double num1, int num2)
{
    cout << "Addition : " <<(num1+num2)<< endl;
}

