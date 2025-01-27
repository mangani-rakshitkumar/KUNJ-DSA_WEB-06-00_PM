// 6. Reference Variable:

// .Create a reference variable for an integer and modify its value through the reference.

#include <iostream>
using namespace std;

int main(){
  int a = 10;
  int &ref = a;
  
  cout<<a<<endl;
  cout<<ref<<endl;

  ref = 20;

  cout<<a<<endl;
  cout<<ref<<endl;

}