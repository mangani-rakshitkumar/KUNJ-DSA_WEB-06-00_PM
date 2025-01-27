// 2. Array of Pointers:

// .Create an integer array and an array of pointers pointing to each element.
// .Output the values of the array through the pointers.

#include <iostream>
using namespace std;

int main()
{
 
 int arr[10] = {11,12,13,14,15,16,17,18,19,20};

 int *a[10] ;
  
  for (int i = 0; i <= 9; i++)
  {
   
    a[i] = &arr[i] ;
  }

  for (int i = 0; i <= 9; i++)
  {
   
    cout<<*a[i]<<endl;
  }
  
}