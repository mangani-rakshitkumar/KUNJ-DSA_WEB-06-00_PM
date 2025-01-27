// 1. Pointers:

// .Declare a pointer and point it to an integer variable.
// .Modify the value of the integer through the pointer and output the result.


#include <iostream>
using namespace std;

int main()
{
  int *p;
  int a;

  cout<<"a : ";
  cin>>a;

  p = &a;

  *p = *p + 10;

  cout<<*p<<endl;
}