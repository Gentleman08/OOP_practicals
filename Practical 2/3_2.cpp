#include<iostream>
using namespace std;
int main()
{
  int n;

  cout<<"Enter your total::";
  cin>>n;

  switch(1)
  {
  case 1:
    if(n>=80)
        cout<<"1st Class";
  case 2:
    if(n>=75 && n<60)
        cout<<"2nd Class";
  case 3:
    if(n>=35&& n<60)
        cout<<"Pass";
  case 4:
    if(n<35)
        cout<<"fail";
  default:
    break;
  }
}
